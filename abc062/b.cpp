#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int h, w;
	vector<string> a;
	string s;
	cin >> h >> w;
	for (int i = 0; i < h; ++i){
		cin >> s;
		a.push_back(s);
	}
	for (int i = 0; i < w+2; ++i){
		cout << "#";
	}
	cout << "\n";
	for (int i = 0; i < h; ++i){
		cout << "#" << a[i] << "#" << "\n";
	}
	for (int i = 0; i < w+2; ++i){
		cout << "#";
	}
	cout << "\n";
	return 0;
}