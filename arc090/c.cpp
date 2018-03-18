#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, candy = 0, maxim, p1 = 0, p2;
    cin >> n;
    int a[2][n];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n; i++){
        p1 += a[0][i];
    }
    maxim = p1;
    for (int i = 0; i < n-1; i++){
        p2 = 0;
        for (int j = 1; j <= i; j++){
            p2 += a[0][j];
        }
        for (int j = i; j < n-1; j++){
            p2 += a[1][j];
        }
        maxim = max(maxim, p2);
    }
    cout << maxim + a[0][0] + a[1][n-1] << '\n';
    return 0;
}