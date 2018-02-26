#include <bits/stdc++.h>
using namespace std;

long long int mod = 1000000007;

long long int kaijo(int x){
	long long int result = 1;
	for (int i = 1; i <= x; ++i){
		result = ((result % mod)*(i % mod)) % mod;
	}
	return result;
}

int main(){
	long long int n, m, r;
	cin >> n >> m;
	if (abs(n - m) >= 2){
		cout << "0" << endl;
		return 0;
	}
	r = kaijo(n) * kaijo(m);
	if (n == m){
		r *= 2;
	}
	cout << r % mod << endl;
	return 0;
}