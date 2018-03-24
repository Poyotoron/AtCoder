#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	ll k, count[100001] = {};
	cin >> n >> k;
	REP(i, n){
		int x, y;
		cin >> x >> y;
		count[x] += y;
	}
	for (int i = 1; i <= 100000; ++i){
		if (k <= count[i]){
			cout << i << "\n";
			break;
		}
		k -= count[i];
	}
	return 0;
}