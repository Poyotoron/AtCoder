#include <bits/stdc++.h>
using namespace std;

int main(void){
	int a, b, c, d, sec[101] = {}, done = 0;
	cin >> a >> b >> c >> d;
	for (int i = a; i < b; ++i){
		sec[i]++;
	}
	for (int i = c; i < d; ++i){
		sec[i]++;
	}
	for (int i = 0; i < 101; ++i){
		if (sec[i] == 2){
			done++;
		}
	}
	cout << done << endl;
	return 0;
}