#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b;
	string s;
	cin >> a >> b;
	cin >> s;
	for (int i = 0; i < s.size(); ++i){
		if (i == a){
			continue;
		}
		if (s[i] == '-'){
			cout << "No" << endl;
			return 0;
		}
	}
	if (s[a] == '-' && s.size() == a+b+1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}