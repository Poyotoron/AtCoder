#include <iostream>
using namespace std;

long f(long x) {
    long res;
    if (x % 4 == 0) {
        res = 0;
    } else if (x % 4 == 1) {
        res = 1;
    } else if (x % 4 == 2) {
        res = 1;
    } else {
        res = 0;
    }

    if (x % 2 == 0) {
        res ^= x;
    }
    return res;
}

int main() {
    long a, b;
    cin >> a >> b;
    cout << (f(a - 1) ^ f(b)) << endl;
    return 0;
}