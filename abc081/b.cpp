#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, tmp, done = 0;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		a.push_back(tmp);
	}
	while(true){
		for (int i = 0; i < a.size(); ++i){
			if (a[i] % 2 != 0){
				cout << done << endl;
				return 0;
			}
		}
		done++;
		for (int i = 0; i < a.size(); ++i){
			a[i] = a[i] / 2;
		}
	}
}