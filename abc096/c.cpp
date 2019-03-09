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
	int h, w;
	cin >> h >> w;
	char s[h][w];
	REP(i, h){
		REP(j, w){
			cin >> s[i][j];
		}
	}
	REP(i, h){
		REP(j, w){
			if (s[i][j] == '#'){
				if (s[i-1][j] == '.' && s[i+1][j] == '.' && s[i][j-1] == '.' && s[i][j+1] == '.'){
					cout << "No" << "\n";
					return 0;
				}
			}
		}
	}
	cout << "Yes" << "\n";
	return 0;
}