#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x, t = 0;
	vector<int> s, r;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		t += x;
		s.push_back(x);
	}
	if ((t % 10) != 0){
		cout << t << "\n";
		return 0;
	}
	r.push_back(0);
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			x = t - s[j];
			if ((x % 10) != 0){
				r.push_back(x);
			}
		}
		t -= s[i];
	}
	sort(r.begin(), r.end(), greater<int>());
	cout << r[0] << "\n";
	return 0;
}