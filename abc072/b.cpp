#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for (int i = 1; i < s.size(); i++){
		s.erase(s.begin() + i);
	}
	cout << s << endl;
	return 0;
}