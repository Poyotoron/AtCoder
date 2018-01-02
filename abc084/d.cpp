// 未AC(謎WA)
#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	bool prime[100001];
	int cnt[100002], n, l, r;
	// エラトステネスの篩(ふるい)を用いて素数判定
	// falseが素数でtrueが素数でないもの
	for (int i = 2; i <= 100000; i++){
		if (!prime[i]){
			for (int j = i+i; j <= 100000; j += i){
				prime[j] = true;
			}
		}
	}
	// 2017に似た数の捜索
	for (int i = 3; i <= 100000; i += 2){
		if (!prime[i] && !prime[(i+1)/2]){
			cnt[i]++;
		}
	}
	// 累積和を用いる
	for (int i = 3; i <= 100000; i++){
		cnt[i] += cnt[i-1];
	}
	cin >> n;
	while (n--){
		cin >> l >> r;
		cout << cnt[r]-cnt[l-1] << "\n";
	}
	return 0;
}