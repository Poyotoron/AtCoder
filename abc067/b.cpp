#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, k, tmp, len = 0;
	vector<int> l;
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		l.push_back(tmp);
	}
	sort(l.begin(), l.end(), greater<int>());
	for (int i = 0; i < k; ++i){
		len += l[i];
	}
	cout << len << endl;
	return 0;
}