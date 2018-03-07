// 未AC
#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, count = 0;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; ++i){
		cin >> a[i] >> b[i];
	}
	for (int i = n; i > 0; --i){
		if (a[i-1]%b[i-1] != 0){
			count += ((a[i-1]/b[i-1])+1)*b[i-1] - a[i-1];
		}
	}
	cout << count << "\n";
	return 0;
}