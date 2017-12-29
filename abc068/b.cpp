#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, i = 0;
	cin >> n;
	while(true){
		i++;
		if (pow(2, i) > n){
			i--;
			break;
		}
	}
	cout << pow(2, i) << endl;
	return 0;
}