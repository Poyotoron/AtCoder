#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(void){
	int n, c = 0, p = 0, tmp, suffer;
	bool AllRun;
	scanf("%d", &n);
	int num[n];
	for (int i = 0; i < n; ++i){
		scanf("%d", &num[i]);
	}
	sort(num, num+n);
	while (p < n){
		suffer = 0;
		tmp = num[p];
		while (p < n && tmp == num[p]){
			suffer++;
			p++;
		}
		c += suffer % 2;
	}
	printf("%d\n", c);
	return 0;
}