#include<bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using vint = vector<int>;
bool is_prime(const unsigned n){
    switch(n){
        case 0:
        case 1: return false;
        case 2: return true;
    }

    if(n%2 == 0) return false;

    for(unsigned i=3;i*i<=n;i+=2){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n] = {};
	int i = 2, p = 0;
	while(a[n-1] == 0){
		if (is_prime(i)){
			a[p] = i;
			p++;
		}
		i++;
	}
	REP(i, n){
		cout << a[i] << "\n";
		if (i != n-1){
			cout << " " << "\n";
		}
	}
	return 0;
}