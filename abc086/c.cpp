#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, a, b, c;
	vector<int> t, x, y;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> a >> b >> c;
		t.push_back(a);
		x.push_back(b);
		y.push_back(c);
	}
	int rt = 0, rx = 0, ry = 0;
	for (int i = 0; i < n; ++i){
		if (t[i]-rt < abs(x[i]-rx) + abs(y[i]-ry)){
			cout << "No" << "\n";
			return 0;
		}
		if ((abs(x[i]-rx) + abs(y[i]-ry))%2 != (t[i]-rt)%2){
			cout << "No" << "\n";
			return 0;
		}
		rt = t[i];
		rx = x[i];
		ry = y[i];
	}
	cout << "Yes" << "\n";
	return 0;
}