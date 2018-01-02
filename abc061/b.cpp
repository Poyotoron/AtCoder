#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, m, x, y, cnt, ap = 0, bp = 0;
	vector<int> a, b;
	cin >> n >> m;
	while (m--){
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int i = 0; i < n; ++i){
		cnt = 0;
		for (int j = ap; a[j] == i+1; ++j){
			cnt++;
			ap++;
		}
		for (int j = bp; b[j] == i+1; ++j){
			cnt++;
			bp++;
		}
		cout << cnt << "\n";
	}
	return 0;
}