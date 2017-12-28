#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	unsigned long long L[86];
	cin >> n;
	L[0] = 2;
	L[1] = 1;
	for (int i = 2; i <= n; ++i){
		L[i] = L[i-1] + L[i-2];
	}
	cout << L[n] << endl;
	return 0;
}