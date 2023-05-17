#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << A[0] << " ";
    int prev = A[0];
    for (int i = 1; i < N; i++) {
        if (prev < A[i]) {
            for (int j = prev+1; j < A[i]; j++) {
                cout << j << " ";
            }
        } else {
            for (int j = prev-1; j > A[i]; j--) {
                cout << j << " ";
            }
        }

        cout << A[i] << " ";
        prev = A[i];
    }
    cout << endl;
    return 0;
}