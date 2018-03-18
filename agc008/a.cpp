#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int x, y, count = LLONG_MAX, pushed;
    cin >> x >> y;
    if (x < y){
        pushed = y - x;
        count = min(count, pushed);
    }
    if (-1*x <= y){
        pushed = (y - (-1*x)) + 1;
        count = min(count, pushed);
    }
    if (x <= -1*y){
        pushed = ((-1*y) - x) + 1;
        count = min(count, pushed);
    }
    if (-1*x <= -1*y){
        pushed = ((-1*y) - (-1*x)) + 2;
        count = min(count, pushed);
    }
    cout << count << endl;
    return 0;    
}
