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

	int n, m, x, y;
	cin >> n  >> m;
	bool go1[n] = {}, go2[n] = {};
	REP(i, m){
		cin >> x >> y;
		if (x == 1){
			go1[y] = true;
		}else if (y == 1){
			go1[x] = true;
		}
		if (x == n){
			go2[y] = true;
		}else if (y == n){
			go2[x] = true;
		}
	}
	REP(i, n){
		if (go1[i] && go2[i]){
			cout << "POSSIBLE" << "\n";
			return 0;
		}
	}
	cout << "IMPOSSIBLE" << "\n";
	return 0;
}