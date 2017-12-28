#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	int n, k, far = 0;
	cin >> n;
	cin >> k;
	int x[n];
	for (int i = 0; i < n; ++i){
		cin >> x[i];
		if (x[i] < k-x[i]){
			far += x[i] * 2;
		}else{
			far += (k-x[i]) * 2;
		}
	}
	cout << far << endl;
	return 0;
}