#include <bits/stdc++.h>
using namespace std;

int main(void){
	int h, w, bomb;
	cin >> h >> w;
	char s[h][w];
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			bomb = 0;
			if (s[i][j] == '#'){
				continue;
			}
			if (i != 0){
				if (j != 0){
					if (s[i-1][j-1] == '#'){
						bomb++;
					}
				}
				if (s[i-1][j] == '#'){
					bomb++;
				}
				if (j+1 != w){
					if (s[i-1][j+1] == '#'){
						bomb++;
					}
				}
			}
			if (j != 0){
				if (s[i][j-1] == '#'){
					bomb++;
				}
			}
			if (j+1 != w){
				if (s[i][j+1] == '#'){
					bomb++;
				}
			}
			if (i+1 != h){
				if (j != 0){
					if (s[i+1][j-1] == '#'){
						bomb++;
					}
				}
				if (s[i+1][j] == '#'){
					bomb++;
				}
				if (j+1 != w){
					if (s[i+1][j+1] == '#'){
						bomb++;
					}
				}
			}
			s[i][j] = char(bomb + '0');
		}
	}
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cout << s[i][j];
		}
		printf("\n");
	}
	return 0;
}