#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, s1, s2;
	cin >> s;
	for (int i = 2; i < 200; i += 2){
		s1 = s.substr(0, (s.size()-i)/2);
		s2 = s.substr((s.size()-i)/2, (s.size()-i)/2);
		if (s1 == s2){
			cout << (s1.size())*2 << endl;
			return 0;
		}
	}
}