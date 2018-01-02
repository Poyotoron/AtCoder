// 未AC(TLE)
#include <cstdio>
#include <vector>
using namespace std;

inline bool pcheck(int n){
	if(n <= 1){
		return false;
	}else if (n == 2){
		return true;
	}
	if (n%2 == 0) return false;
	for(int i = 3; i*i<= n; i += 2){
		if(n % i == 0) return false;
	}
	return true;
}

int main(void){
	int q, l, r, tmp;
	vector<int> cnt;
	scanf("%d", &q);
	for (int i = 0; i < q; ++i){
		tmp = 0;
		scanf("%d %d", &l, &r);
		for (int j = (l+1)/2; j <= (r+1)/2; j++){
			if (pcheck(j) == true && pcheck(2*j-1) == true) tmp++;
		}
		cnt.push_back(tmp);
	}
	for (int i = 0; i < cnt.size(); ++i) printf("%d\n", cnt[i]);
	return 0;
}