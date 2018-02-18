#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string a, b;
	cin >> a >> b;
	int r = stoi(a+b);
	for (int i = 0; i < 1000; ++i){
		if (r == i*i){
			cout << "Yes" << "\n";
			return 0;
		}
	}
	cout << "No" << "\n";
	return 0;
}