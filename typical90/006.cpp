#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> search_next(const string &S) {
    int N = S.size();

    vector<vector<int>> res(N+1, vector<int>(26, N));

    for (int i = N-1; i >= 0; i--) {
        res[i] = res[i+1];

        res[i][S[i] - 'a'] = i;
    }
    
    return res;
}

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    string answer = "";
    auto next_char = search_next(S);

    int j = -1;
    for (int i = 0; i < K; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            int kk = next_char[j+1][c-'a'];

            if (N - kk >= K - i) {
                answer += c;
                j = kk;
                break;
            }
        }
    }
    
    cout << answer << endl;
    return 0;
}