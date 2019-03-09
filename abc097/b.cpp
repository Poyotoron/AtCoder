#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;

bool ooo(int x){
	for (int i = 2; i < x; ++i){
		int s = 1;
		while(s < x){
			s *= i;
		}
		if (s == x){
			return true;
		}
	}
	return false;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int x;
	cin >> x;
	if (ooo(x)){
		cout << x << "\n";
		return 0;
	}
	while(x--){
		if (ooo(x)){
			cout << x << "\n";
			return 0;
		}
	}
	return 0;
}