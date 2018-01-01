#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x, o;
	vector<int> a;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> x;
		a.push_back(x);
	}
	for (int i = a.size()-1; i >= 0; i -= 2){
		cout << a[i] << " ";
	}
	if (n%2 == 0){
		o = 0;
	}else{
		o = 1;
	}
	for (int i = o; i < a.size(); i += 2){
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}