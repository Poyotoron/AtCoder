// 未AC
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

	int n, suma = 0, sumb = 0, donea = 0, doneb = 0;
	cin >> n;
	int a, b;
	REP(i, n){
		cin >> a >> b;
		suma += a;
		sumb += b;
		if (a > b){
			donea += a - b;
		}else if (a < b){
			doneb += (b - a)%2 == 0 ? (b - a)/2 : (b - a)/2+1;
		}
	}
	int done = donea + doneb;
	if (done <= sumb - suma){
		cout << "Yes" << "\n";
	}else{
		cout << "No" << "\n";
	}
	return 0;
}