#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b, c, d, e, f;
	int water, sugar, msugar;
	int mx, my;
	double mpercent = 0, percent;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = 0; 100*a*i <= f; ++i){
		for (int j = 0; 100*b*j <= f - 100*a*i; ++j){
			water = 100*a*i + 100*b*j;
			msugar = f - water;
			for (int k = 0; c*k <= msugar; ++k){
				for (int l = 0; d*l <= msugar - c*k; ++l){
					sugar = c*k + d*l;
					if (water * e < 100 * sugar){
						continue;
					}
					percent = (double)(100*sugar)/(water+sugar);
					if (percent >= mpercent){
						mpercent = percent;
						mx = water;
						my = sugar;
					}
				}
			}
		}
	}
	cout << mx + my << " " << my << "\n";
	return 0;
}