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
	cin >> a >> b >> c >> d;
	if ((abs(c - a) <= d) || ((abs(b - a) <= d) && (abs(c - b) <= d))){
		cout << "Yes" << "\n";
	}else{
		cout << "No" << "\n";
	}
	return 0;
}