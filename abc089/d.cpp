// 未AC
#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int x1, x2, y1, y2, total;
	int h, w, d;
	cin >> h >> w >> d;

	int a;
	map<int, int> ax, ay;
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cin >> a;
			ax[a] = i;
			ay[a] = j;
		}
	}

	int q;
	cin >> q;

	int l, r;
	for (int i = 0; i < q; ++i){
		cin >> l >> r;
		total = 0;
		int x[(r-l)/d+1], y[(r-l)/d+1];
		for (int j = 0; j < (r-l)/d+1; ++j){
			x[j] = ax[l+d*j];
			y[j] = ay[l+d*j];
			if (j >= 1){
				total += abs(x[j]-x[j-1]) + abs(y[j]-y[j-1]);
			}
		}
		cout << total << "\n";
	}
	return 0;
}