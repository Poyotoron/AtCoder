#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, k, zero, done;
	cin >> n >> k;
	int x[n];
	bool p;
	vector<int> moved;
	REP(i, n){
		cin >> x[i];
		if (i > 0){
			if (x[i-1] < 0 && 0 <= x[i]){
				zero = i;
				p = true;
			}
		}else{
			if (x[0] >= 0){
				zero = 0;
				p = false;
			}
		}
	}
	if (x[n-1] <= 0){
		cout << x[n-k] << "\n";
		return 0;
	}
	if (!p){
		cout << x[k-1] << "\n";
		return 0;
	}
	if (zero >= k){
		moved.push_back(x[zero-k]);
	}
	if (n-zero+1 >= k){
		moved.push_back(x[zero+k-1]);
	}
	int dm = 1;
	while(zero - dm >= 0){
		done = 0;
		done += abs(x[zero-dm])*2;
		done += abs(x[zero+k-dm-1]);
		moved.push_back(done);
		dm++;
		if (dm > k){
			break;
		}
	}
	int dp = 0;
	while(zero + dp < n){
		done = 0;
		done += abs(x[zero+dp])*2;
		done += abs(x[zero-(k-dp)]);
		moved.push_back(done);
		dp++;
		if (dp > k){
			break;
		}
	}
	sort(moved.begin(), moved.end());
	cout << moved[0] << "\n";
	return 0;
}