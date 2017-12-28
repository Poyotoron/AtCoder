#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a, b, m, sum = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; ++i){
		m = 0;
		if (i < 10){
			m += i;
		}else if (i < 100){
			m = i/10 + i%10;
		}else if (i < 1000){
			m = i/100 + i%100/10 + i%100%10;
		}else if (i < 10000){
			m = i/1000 + i%1000/100 + i%1000%100/10 + i%1000%100%10;
		}else{
			m = 1;
		}
		if (a <= m && m <= b){
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}