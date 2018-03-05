#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int total = 0;
	int n, x;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < 3*n; ++i){
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 1; i <= n; ++i){
		total += a[2*i-1];
	}
	cout << total << "\n";
	return 0;
}