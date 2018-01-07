#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	long long int y;
	cin >> n >> y;
	for (int i = 0; i <= n; ++i){
		for (int j = 0; j <= n-i; ++j){
			for (int k = 0; k <= n-i-j; ++k){
				if (i+j+k == n && 10000*i + 5000*j + 1000*k == y){
					cout << i  << " " << j << " " << k << "\n";
					return 0;
				}
			}
		}
	}
	cout << "-1 -1 -1" << "\n";
	return 0;
}