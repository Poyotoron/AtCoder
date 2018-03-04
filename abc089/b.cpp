#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, count = 0;
	char c;
	bool P, W, G, Y;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> c;
		if (c == 'Y'){
			cout << "Four" << "\n";
			return 0;
		}
	}
	cout << "Three" << "\n";
	return 0;
}