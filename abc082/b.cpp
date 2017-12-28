#include <bits/stdc++.h>
using namespace std;

int main(void){
	string s, t;
	cin >> s >> t;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end(), greater<int>());
	if (t.compare(s) > 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}