#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

void add_mod(int &a, int b) {
    a += b;
    if (a >= MOD) {
        a -= MOD;
    }
}

int main() {
    int N;
    string S, T = "atcoder";
    cin >> N >> S;

    vector<vector<int>> dp(N+1, vector<int>(T.size()+1, 0));

    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < T.size()+1; j++) {
            add_mod(dp[i+1][j], dp[i][j]);

            if (j < T.size() && S[i] == T[j]) {
                add_mod(dp[i+1][j+1], dp[i][j]);
            }
        }
    }
    
    cout << dp[N][7] << endl;
}