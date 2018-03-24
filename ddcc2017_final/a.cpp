#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int k, x, y, w20 = 0, w30 = 0;
	cin >> k;
	REP(i, 200/k){
		REP(j, 200/k){
			x = k * i;
			y = k * j;
			if (x >= 100){
				x += k;
			}
			if (y >= 100){
				y += k;
			}
			if (pow(100, 2) >= (pow(abs(100-x), 2) + pow(abs(100-y), 2))){
				w20++;
			}
		}
	}
	REP(i, 300/k){
		REP(j, 300/k){
			x = k * i;
			y = k * j;
			if (x >= 150){
				x += k;
			}
			if (y >= 150){
				y += k;
			}
			if (pow(150, 2) >= (pow(abs(150-x), 2) + pow(abs(150-y), 2))){
				w30++;
			}
		}
	}
	cout << w20 << " " << w30 << "\n";
	return 0;
}