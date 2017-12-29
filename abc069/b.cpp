#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
	string s, r;
	cin >> s;
	r = s[0] + to_string(s.size()-2) + s[s.size()-1];
	cout << r << endl;
	return 0;
}