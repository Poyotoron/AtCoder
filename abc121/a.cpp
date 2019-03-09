#include <iostream>
using namespace std;

int main() {
  int lh, lw, h, w;
  cin >> lh >> lw;
  cin >> h >> w;
  cout << (lh * lw) - (h * lw) - (w * (lh - h)) << endl;
  return 0;
}