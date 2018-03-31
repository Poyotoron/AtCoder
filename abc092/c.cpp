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

	int n;
	cin >> n;
	int a[n+2], subete = 0;
	a[0] = 0;
	a[n+1] = 0;
	FOR(i, 1, n+1){
		cin >> a[i];
		subete += abs(a[i] - a[i-1]);
	}
	subete += abs(a[n]);
	int resu;
	FOR(i, 1, n+1){
		resu = subete;
		if ((a[i-1] <= a[i] && a[i] <= a[i+1]) || (a[i-1] >= a[i] && a[i] >= a[i+1])){
			cout << subete << "\n";
			continue;
		}
		resu -= abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
		resu += abs(a[i+1] - a[i-1]);
		cout << resu << "\n";
	}
	return 0;
}