#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int sv, lv;
	cin >> sv;
	if (sv < 100){
		cout << "00" << "\n";
	}else if (100 <= sv && sv <= 5000){
		lv = ((double)sv / 1000) * 10;
		if (lv < 10){
			cout << "0" << lv << "\n";
		}else{
			cout << lv << "\n";
		}
	}else if (6000 <= sv && sv <= 30000){
		lv = ((double)sv / 1000) + 50;
		cout << lv << "\n";
	}else if (35000 <= sv && sv <= 70000){
		lv = (((double)sv / 1000) - 30)/5 + 80;
		cout << lv << "\n";
	}else{
		cout << "89" << "\n";
	}
	return 0;
}