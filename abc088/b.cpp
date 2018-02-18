#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x, ali = 0, bob = 0;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < n; ++i){
		if (i % 2 == 0){
			ali += a[i];
		}else{
			bob += a[i];
		}
	}
	cout << ali - bob << "\n";
	return 0;
}