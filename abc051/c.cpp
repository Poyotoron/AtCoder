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

	int s[2], t[2];
	string resu;
	cin >> s[0] >> s[1] >> t[0] >> t[1];
	// 時計回りに一周
	REP(i, t[1] - s[1]) resu += 'U';
	REP(i, t[0] - s[0]) resu += 'R';
	REP(i, t[1] - s[1]) resu += 'D';
	REP(i, t[0] - s[0]) resu += 'L';
	// さらに外を回す
	resu += 'L';
	REP(i, t[1] - s[1] + 1) resu += 'U';
	REP(i, t[0] - s[0] + 1) resu += 'R';
	// 地点の通過
	resu += 'D';
	resu += 'R';
	// 外回って戻る
	REP(i, t[1] - s[1] + 1) resu += 'D';
	REP(i, t[0] - s[0] + 1) resu += 'L';
	resu += 'U';

	cout << resu << "\n";
	return 0;
}