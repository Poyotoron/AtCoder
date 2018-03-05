#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int tp = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i){
		if (s[i] == 'p'){
			tp++;
		}
	}
	cout << s.size()/2 - tp << "\n";
	return 0;
}