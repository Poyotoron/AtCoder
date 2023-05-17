#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;

    int T = 0, A = 0;
    char saki = 'X';

    for (char c: S) {
        if (c == 'T') {
            T++;
            if (T == A) {
                saki = 'A';
            }
        }
        if (c == 'A') {
            A++;
            if (T == A) {
                saki = 'T';
            }
        }
    }

    if (T == A) {
        cout << saki << endl;
    } else if (T > A) {
        cout << "T" << endl;
    } else {
        cout << "A" << endl;
    }

    return 0;
}