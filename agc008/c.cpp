#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	long long int i, o, t, j, l, s, z, k[2], r = 0;
	cin >> i >> o >> t >> j >> l >> s >> z;
	k[0] = (i/2)*2 + (j/2)*2 + (l/2)*2;
	r = max(r, k[0]);
	if (i >= 1 && j >= 1 && l >= 1){
		k[1] = 3 + ((i-1)/2)*2 + ((j-1)/2)*2 + ((l-1)/2)*2;
		r = max(r, k[1]);
	}
	cout << r + o<< "\n";
	return 0;
}