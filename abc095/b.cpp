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

	int n, x;
	int t = 0;
	cin >> n >> x;
	int m[n];
	int d = n;
	REP(i, n){
		cin >> m[i];
		t += m[i];
	}
	int remain = x - t;
	sort(m, m+n);
	cout << n + remain / m[0] << "\n";
	return 0;
}