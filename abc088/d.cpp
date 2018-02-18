#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int h, w, done = 0, n[2] = {0, 0}, blk = 0, lastn0;
	bool gone;
	cin >> h >> w;
	int all = h*w;
	char s[h][w];
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cin >> s[i][j];
			if (s[i][j] == '#'){
				blk++;
			}
		}
	}
	while (true){
		// cout << n[0] << n[1] << "\n";
		gone = false;
		if (n[1]+1 == w){
			if (s[n[0]+1][n[1]] == '.'){
				n[0]++;
				done++;
			}else{
				for (int i = 1; i <= n[0]; ++i){
					if (s[n[0]][n[1]-i] == '.' && s[n[0]+1][n[1]-i] == '.'){
						n[0]++;
						n[1] -= i;
						done += i+1;
						if (lastn0 == n[0]-1){
							done -= i;
						}
						gone = true;
						break;
					}
				}
				if (!gone){
					cout << "-1" << "\n";
					return 0;
				}
			}
		}else{
			if (s[n[0]][n[1]+1] == '.'){
				n[1]++;
				done++;
			}else{
				for (int i = 0; i <= n[0]; ++i){
					if (s[n[0]+1][n[1]-i] == '.'){
						n[0]++;
						n[1] -= i;
						done++;
						gone = true;
						break;
					}
					done--;
				}
				if (!gone){
					cout << "-1" << "\n";
					return 0;
				}
			}
			lastn0 = n[0];
		}
		if (n[0]+1 == h && n[1]+1 == w){
			break;
		}
	}
	cout << all-2 - blk - done + 1 << "\n";
	return 0;
}