#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	for (int i = 0; i <= n; ++i){
		if (i*i <= n && n < (i+1)*(i+1)){
			cout << i*i << endl;
			return 0;
		}
	}
}