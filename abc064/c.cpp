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

	int n, x, kmin = 0, kmax;
	int rate[9] = {};
	cin >> n;
	REP(i, n){
		cin >> x;
		if (x >= 3200){
			rate[8]++;
		}else{
			rate[x/400]++;
		}
	}
	REP(i, 8){
		if (rate[i] != 0){
			kmin++;
		}
	}
	kmax =kmin+rate[8];
	if (kmin == 0){
		kmin = 1;
	}
	cout << kmin << " " << kmax << "\n";
	return 0;
}