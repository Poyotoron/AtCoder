#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> d, mochi;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        d.push_back(temp);
    }
    
    sort(d.begin(), d.end(), greater<int>{});

    mochi.push_back(d[0]);

    for (int i: d) {
        if (mochi.back() == i) {
            continue;
        }
        mochi.push_back(i);
    }

    cout << mochi.size() << endl;
    return 0;
}