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

	string s;
	cin >> s;
	int price = 700;
	if (s[0] == 'o'){
		price += 100;
	}
	if (s[1] == 'o'){
		price += 100;
	}
	if (s[2] == 'o'){
		price += 100;
	}
	cout << price << "\n";
	return 0;
}