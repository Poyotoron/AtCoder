#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, a, b;
	cin >> n;
	cin >> a >> b;
	if (n%2 == 0 && (b-a)%2 == 0){
		cout << "Alice" << "\n";
	}else if (n%2 == 0 && (b-a)%2 == 1){
		cout << "Borys" << "\n";
	}else if (n%2 == 1 && (b-a)%2 == 0){
		cout << "Alice" << "\n";
	}else{
		cout << "Borys" << "\n";
	}
	return 0;
}