#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b;
	c = a*b;
	if (c%2 == 1){
		cout << "Odd" << "\n";
	}else{
		cout << "Even" << "\n";
	}
	return 0;
}