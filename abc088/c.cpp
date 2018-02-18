#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a[3], b[3], c[3][3], a2[3], a3[3];
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			cin >> c[i][j];
		}
	}
	for (a[0] = 0; a[0] <= 100; a[0]++){
		for (int j = 0; j < 3; ++j){
			b[j] = c[0][j] - a[0];
		}
		for (int j = 0; j < 3; ++j){
			a2[j] = c[1][j] - b[j];
		}
		if (a2[0] != a2[1] || a2[1] != a2[2]){
			continue;
		}
		for (int j = 0; j < 3; ++j){
			a3[j] = c[2][j] - b[j];
		}
		if (a3[0] != a3[1] || a3[1] != a3[2]){
			continue;
		}
		cout << "Yes" << "\n";
		return 0;
	}
	cout << "No" << "\n";
	return 0;
}