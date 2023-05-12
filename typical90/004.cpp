#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    vector<int> yoko(H, 0), tate(W, 0);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            yoko[i] += A[i][j];
            tate[j] += A[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << yoko[i] + tate[j] - A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}