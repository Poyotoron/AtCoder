#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x, cnt = 0, place = 0;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; ++i){
		cnt++;
		place = a[place]-1;
		if (place == 1){
			cout << cnt << endl;
			return 0;
		}
	}
	cout << "-1" << "\n";
	return 0;
}