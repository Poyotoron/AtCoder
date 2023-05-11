#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        a.push_back(temp);
    }

    sort(a.begin(), a.end(), greater<int>{});

    int alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }
    
    cout << alice - bob << endl;
    return 0;
}