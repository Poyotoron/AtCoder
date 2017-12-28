#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	int n, t[100], m, p[100], x[100], time;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> t[i];
	}
	cin >> m;
	for (int i = 0; i < m; ++i){
		cin >> p[i] >> x[i];
	}
	for (int i = 0; i < m; ++i){
		time = 0;
		for (int j = 0; j < n; ++j){
			if (j + 1 == p[i]){
				time += x[i];
			}else{
				time += t[j];
			}
		}
		cout << time << endl;
	}
	return 0;
}