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

	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << min(a, b) + min(c, d) << "\n";
	return 0;
}