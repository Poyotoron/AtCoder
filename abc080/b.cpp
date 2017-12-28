#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m, d8, d7, d6, d5, d4, d3, d2, d1;
	cin >> n;
	d8 = n / 100000000;
	d7 = n / 10000000;
	d6 = n / 1000000;
	d5 = n / 100000;
	d4 = n / 10000;
	d3 = n / 1000;
	d2 = n / 100;
	d1 = n / 10;
	m = d8 + (d7-d8*10) + (d6-d7*10) + (d5-d6*10) + (d4-d5*10) + (d3-d4*10) + (d2-d3*10) + (d1-d2*10) + (n-d1*10);
	if (n % m == 0){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}