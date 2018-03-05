#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int r, c, t = 0;
	cin >> r >> c;
	int x, y;
	for (int i = 1; i <= r/c; ++i){
		y = i*c;
		x = sqrt((double)r*r - y*y);
		t += x/c;
	}
	cout << t*4 << "\n";
	return 0;
}