#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    vector<int> A(N+1, 0), B(N+1, 0);

    for (int i = 1; i < N+1; i++) {
        int c, p;
        cin >> c >> p;

        A[i] = A[i-1];
        B[i] = B[i-1];
        if (c == 1) {
            A[i] += p;
        } else {
            B[i] += p;
        }
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;

        cout << A[r] - A[l-1] << " " << B[r] - B[l-1] << endl;
    }
    
    return 0;
}