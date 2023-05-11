#include <iostream>
using namespace std;

int main() {
    int n, a, b, count = 0;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        int j = i + 1, sum = 0;

        while (j) {
            sum += j % 10;
            j /= 10;
        }

        if (a <= sum && sum <= b) {
            count += i + 1;
        }
    }
    
    cout << count << endl;
    return 0;
}