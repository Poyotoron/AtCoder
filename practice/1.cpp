#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void){
	int a, b, c;
	string s;
	cin >> a;
	scanf("%d %d", &b, &c);
	cin >> s;
	printf("%d %s\n", a+b+c, s.c_str());
	return 0;
}