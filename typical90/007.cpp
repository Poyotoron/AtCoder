#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> Q;
    vector<int> B(Q);
    for (int i = 0; i < Q; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());

    for (int score: B) {
        int left = 0, right = N, mid, rate;
        int diff, prev = INT_MAX;

        while (left < right) {
            mid = (left+right) / 2;

            rate = A[mid];
            diff = abs(score - A[mid]);

            if (score > A[mid]) {
                left = mid + 1;
            } else {
                right = mid;
            }

            if (prev > diff) {
                prev = diff;
            }

            // prev = diff;
        }

        cout << prev << endl;
    }
    
    // for (int score: B) {
    //     int prev = INT_MAX;
    //     for (int rate: A) {
    //         if (prev < abs(score - rate)) {
    //             break;
    //         }
    //         prev = abs(score - rate);
    //     }

    //     cout << prev << endl;
    // }

    return 0;
}