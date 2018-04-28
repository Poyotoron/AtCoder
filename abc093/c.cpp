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

	int n[3], resu = 0;
	cin >> n[0] >> n[1] >> n[2];
	sort(n, n+3);
	while (n[1] < n[2]){
		n[0]++;
		n[1]++;
		resu++;
	}
	while((n[1]-n[0]) / 2 >= 1){
		n[0] += 2;
		resu++;
	}
	if (n[1]-n[0] == 1){
		resu += 2;
	}
	cout << resu << "\n";
	return 0;
}