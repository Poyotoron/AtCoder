// 未AC
#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, k, a, b, kn;
	bool ko = false;
	vector<int> BA;
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cin >> a >> b;
		if (BA.size() > k){
			if (!ko){
				sort(BA.begin(), BA.end());
				kn = BA[k-1];
				ko = true;
			}
			if (a < k){
				for (int j = 0; j < b; ++j){
					BA.push_back(a);
				}
				sort(BA.begin(), BA.end());
				kn = BA[k-1];
			}
		}else{
			for (int j = 0; j < b; ++j){
				BA.push_back(a);
			}
		}
	}
	if (!ko){
		sort(BA.begin(), BA.end());
		kn = BA[k-1];
	}
	cout << kn << "\n";
	return 0;
}