#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int n, count = 0, sum = 0, sumb;
	cin >> n;
	long long int a[n];
	REP(i, n){
		cin >> a[i];
		sum += a[i];
		if (sum == 0){
			count++;
		}
		sumb = sum;
		REP(j, i){
			sumb -= a[j];
			if (sumb == 0){
				count++;
			}
		}
	}
	cout << count << "\n";
	return 0;
}