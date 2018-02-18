// 未AC
#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int r, c, k, n, x, y, cnt, res = 0;
	bool xt, yt;
	cin >> r >> c >> k;
	cin >> n;
	vector<int> rp, cp;
	for (int i = 0; i < n; ++i){
		cin >> x >> y;
		rp.push_back(x);
		cp.push_back(y);
	}
	for (int i = 1; i <= r; ++i){
		for (int j = 1; j <= c; ++j){
			cnt = 0;
			for (int l = 0; l < n; ++l){
				xt = false;
				yt = false;
				if (rp[l] == i){
					xt = true;
				}
				if (cp[l] == j){
					yt = true;
				}
				if (xt || yt){
					cnt++;
				}
			}
			if (cnt == k){
				res++;
			}
		}
	}
	cout << res << "\n";
	return 0;
}