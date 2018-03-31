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

	int n, d, x, t;
	cin >> n;
	cin >> d >> x;
	int a[d] = {};
	REP(i, n){
		cin >> t;
		REP(j, d){
			if (j%t == 0){
				a[j]++;
			}
		}
	}
	int resu = 0;
	REP(i, d){
		resu += a[i];
	}
	cout << resu + x << "\n";
	return 0;
}