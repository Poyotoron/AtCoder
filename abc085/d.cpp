#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int n, h, x, y, d = 0, k, i;
	vector<long long int> a, b;
	cin >> n >> h;
	for (int i = 0; i < n; ++i){
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	}
	sort(a.begin(), a.end(), greater<long long int>());
	sort(b.begin(), b.end(), greater<long long int>());
	for (i = 0; i < n; ++i){
		if (b[i] < a[0]){
			break;
		}
		d += b[i];
		if (d >= h){
			cout << i+1 << "\n";
			return 0;
		}
	}
	k = (h-d)/a[0];
	if ((h-d)%a[0] != 0){
		k += 1;
	}
	cout << i+k << "\n";
	return 0;
}