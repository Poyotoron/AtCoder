#include <iostream>
#include <climits>
#include <stdio.h>
using namespace std;

int a(int num){
	return num * 2;
}

int b(int num, int k){
	return num + k;
}

int main(void){
	int num, n, k, i, j, min = INT_MAX;
	cin >> n;
	cin >> k;
	for (i = 0; i < n+1; ++i){
		num = 1;
		for (j = 0; j < n-i; ++j){
			num = a(num);
		}
		for (j = 0; j < i; ++j){
			num = b(num, k);
		}
		if (num < min){
			min = num;
		}
		//cout << i << '\n' << num << endl;;
	}
	cout << min << endl;
}