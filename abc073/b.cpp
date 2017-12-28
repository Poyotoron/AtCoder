#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int n;
	int cs, ce, ct = 0;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> cs >> ce;
		ct += ce - cs + 1;
	}
	cout << ct << endl;
	return 0;
}