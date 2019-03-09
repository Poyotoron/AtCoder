#include <iostream>
using namespace std;

int main() {
    int ok = 0;
    int n, m, c;
    cin >> n >> m >> c;
    int b[m], a[n][m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j] * b[j];
        }
        if (sum + c > 0) {
            ok++;
        }
    }
    cout << ok << endl;
}