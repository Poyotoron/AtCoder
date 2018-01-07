#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	bool f;
	int n, x;
	vector<int> d;
	cin >> n;
	for (int i = 0; i < n; ++i){
		f = false;
		cin >> x;
		for (int j = 0; j < d.size(); ++j){
			if (x == d[j]){
				f = true;
			}
		}
		if (!f){
			d.push_back(x);
		}
	}
	cout << d.size() << "\n";
	return 0;
}