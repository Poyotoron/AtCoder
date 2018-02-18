// 未AC
#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int n, k, a, b, ox, oy, sc;
	char z;
	vector<long long int> x, y, s;
	vector<char> c;
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cin >> a >> b >> z;
		x.push_back(a);
		y.push_back(b);
		c.push_back(z);
	}
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < k; ++j){
			for (int l = 0; l < k; ++l){
				sc = 0;
				ox = 0-(k-(x[i]-j)%k);
				oy = 0-(k-(y[i]-l)%k);
				for (int m = 0; m < n; ++m){
					if ((abs(x[m]-ox)/k+abs(y[m]-oy)/k)%2 == 1 && c[i] != c[m]){
						sc++;
					}
					if ((abs(x[m]-ox)/k+abs(y[m]-oy)/k)%2 == 0 && c[i] == c[m]){
						sc++;
					}
				}
				s.push_back(sc);
			}
		}
	}
	sort(s.begin(), s.end(), greater<int>());
	cout << s[0] << "\n";
	return 0;
}