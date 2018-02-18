#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, n;
	cin >> n;
	cin >> a;

	if (n % 500 <= a){
		cout << "Yes" << "\n";
	}else{
		cout << "No" << "\n";
	}
	return 0;
}