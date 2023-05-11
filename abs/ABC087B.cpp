#include <iostream>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    int p = 0;

    for (int i = a; i > -1; i--) {
        if (500*i > x) {
            continue;
        }
        
        for (int j = b; j > -1; j--) {
            if (500*i + 100*j > x) {
                continue;
            }

            for (int k = c; k > -1; k--) {
                // cout << i << j << k << endl;

                if (500*i + 100*j + 50*k > x) {
                    continue;
                }

                if (500*i + 100*j + 50*k == x) {
                    p++;
                    break;
                }
            }
            
        }
        
    }
    
    cout << p << endl;
    return 0;
}