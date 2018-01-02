#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string a, b;
	cin >> a;
	cin >> b;
	if (a.size() > b.size()){
		cout << "GREATER" << "\n";
		return 0;
	}else if (a.size() < b.size()){
		cout << "LESS" << "\n";
		return 0;
	}
	for (int i = 0; i < a.size(); ++i){
		if (a[i] > b[i]){
			cout << "GREATER" << "\n";
			return 0;
		}else if (a[i] < b[i]){
			cout << "LESS" << "\n";
			return 0;
		}
	}
	cout << "EQUAL" << "\n";
	return 0;
}