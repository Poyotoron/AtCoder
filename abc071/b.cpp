#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	char comp = 'a';
	for (int i = 0; i < 26; ++i){
		if (s.find(char(comp + i)) == -1){
			cout << char(comp + i) << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}