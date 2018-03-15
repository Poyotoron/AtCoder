#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
	while(x != y){
		if (x > y){
			x -= y;
		}else{
			y -= x;
		}
	}
	return x;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	cout << m - gcd(n, m) << "\n";
	return 0;
}