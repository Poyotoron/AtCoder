#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, L, K;
    cin >> N >> L >> K;

    vector<long long> A(N);
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
    }

    auto checker = [&](long long x) {
        // printf("Maaaaa.");
        long long cutted = 0, start = 0, now_len = 0;

        for (long long i = 0; i < N; i++) {
            if (A[i] - start >= x) {
                start = A[i];
                cutted++;
            }
        }

        if (L - start >= x) {
            cutted++;
        }
        
        return cutted >= (K + 1);
    };
    
    long long left = -1, right = L + 1;

    while (right - left > 1) {
        long long mid = (left + right) / 2;

        if (checker(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << left << endl;
    return 0;
}