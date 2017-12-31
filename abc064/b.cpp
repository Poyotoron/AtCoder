#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	cout << a[n-1] - a[0] << endl;
	return 0;
}