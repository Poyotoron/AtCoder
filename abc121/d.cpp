#include <iostream>
using namespace std;

int main() {
  long long int a, b, res[2], ress;
  cin >> a >> b;
  res[0] = a;
  res[1] = b;
  if (a == b) {
    cout << a << endl;
    return 0;
  }
  /*
  for (int i = a + 1; i <= b; i++) {
    res ^= i;
  }
  */
  int i = 1;
  while ((b - i) - (a + i) > 2) {
    res[0] ^= a + i;
    res[1] ^= b - i;
    i++;
  }
  ress = res[0] ^ res[1];
  if ((b - i) - (a + i) == 2) {
    ress ^= a + i;
  }

  cout << ress << endl;
  return 0;
}