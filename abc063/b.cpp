#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size()-1; ++i){
		if (s[i] == s[i+1]){
			cout << "no" << "\n";
			return 0;
		}
	}
	cout << "yes" << "\n";
	return 0;
}