// 未AC
#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;

int check(string t){
	int nico = 0;
	REP(i, t.size()){
		if (t[i] == '2' && t[i+1] == '5'){
			nico += 2;
		}
	}
	return nico;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string t, tf, tg;
	cin >> t;
	int len = t.size() + 2;
	tf = '0' + t + '0';
	tg = '0' + t + '0';
	// 先頭から置換
	FOR(i, 1, len){
		if (tf[i] != '?'){
			continue;
		}
		if (tf[i-1] == '2'){
			tf[i] = '5';
		}else{
			tf[i] = '2';
		}
	}
	// 後方から置換
	FORR(i, len, 1){
		if (tg[i] != '?'){
			continue;
		}
		if (tg[i+1] == '5'){
			tg[i] = '2';
		}else{
			tg[i] = '5';
		}
	}
	cout << max(check(tf), check(tg)) << "\n";
	return 0;
}