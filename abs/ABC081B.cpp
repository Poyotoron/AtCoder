#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    int a;

    int max_iter = INT_MAX;

    cin >> n;

    for (size_t i = 0; i < n; i++) {
        cin >> a;

        int m = 0;

        while (a % 2 == 0) {
            a >>= 1;
            m++;
        }

        max_iter = min(max_iter, m);

        if (max_iter == 0) {
            break;
        }
    }

    cout << max_iter << endl;
    return 0;
}