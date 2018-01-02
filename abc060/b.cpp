#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i <= 100; ++i){
		if ((b*i+c)%a == 0){
			cout << "YES" << "\n";
			return 0;
		}
	}
	cout << "NO" << "\n";
	return 0;
}