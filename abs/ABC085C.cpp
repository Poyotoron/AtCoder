#include <iostream>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    for (int i = n; i > -1; i--) {
        if (10000*i > y) {
            continue;
        }

        for (int j = n-i; j > -1; j--) {
            int k = n - i - j;

            // if (10000*i + 5000*j + 1000*k > y) {
            //     continue;
            // }

            if (10000*i + 5000*j + 1000*k == y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }

            // for (int k = n-i-j; k > -1; k--) {
            //     if (10000*i + 5000*j + 1000*k > y) {
            //         continue;
            //     }

            //     if (10000*i + 5000*j + 1000*k == y) {
            //         cout << i << j << k << endl;
            //         return 0;
            //     }
            // }
            
        }
        
    }

    cout << "-1 -1 -1" << endl;
    return 0;
    
}