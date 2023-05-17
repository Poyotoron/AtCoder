#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int str_len = S.size(), s_at = 0, t_at = 0;
    string S_diff = "";
    regex re("[^atcoder@]");

    for (char c: S) {
        int index = T.find(c);

        if (c == '@') {
            S_diff += c;
            continue;
        }

        if (index != string::npos) {
            T.erase(T.begin()+index, T.begin()+(index+1));
        } else {
            S_diff += c;
        }
    }

    if (regex_search(S_diff, re) || regex_search(T, re)) {
        cout << "No" << endl;
        return 0;
    }

    int S_at = count(S_diff.begin(), S_diff.end(), '@'), T_at = count(T.begin(), T.end(), '@');

    if (S_at >= T.size() - T_at && T_at >= S_diff.size() - S_at) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}