#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int tp = 0, xp = 0, yp = 0;

    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        if (abs(x - xp) + abs(y - yp) > t - tp || (abs(x - xp) + abs(y - yp)) % 2 != (t - tp) % 2) {
            cout << "No" << endl;
            return 0;
        }

        tp = t;
        xp = x;
        yp = y;
        // cout << "Do" << endl;
    }
    
    cout << "Yes" << endl;
    return 0;
}