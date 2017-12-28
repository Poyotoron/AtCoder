#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
	int n;
	cin >> n;
	if (n >= 90 || n % 10 == 9){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}