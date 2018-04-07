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

	string s;
	cin >> s;
	char c;
	if (s.size() < 26){
		bool used[26] = {};
		REP(i, s.size()){
			used[(int)s[i] - 'a'] = true;
		}
		REP(i, 26){
			if (!used[i]){
				cout << s + (char)((int)'a' + i) << "\n";
				return 0;
			}
		}
	}
	int m = 26;
	if (s.size() == 26){
		REPR(i, s.size()-2){
			if (s[i] > s[i+1]){
				m--;
			}else{
				break;
			}
		}
	}
	if (m == 1){
		cout << "-1" << "\n";
		return 0;
	}
	while (s.size() > m-2){
		c = s[s.size()-1];
		s.pop_back();
	}
	bool used[26] = {};
	REP(i, s.size()){
		used[(int)s[i] - 'a'] = true;
	}
	FOR(i, ((int)c-'a')+1, 26){
		if (!used[i]){
			cout << s + (char)((int)'a' + i) << "\n";
			return 0;
		}
	}
	return 0;
}