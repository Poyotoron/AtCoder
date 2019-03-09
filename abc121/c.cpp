#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> pairs(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    pairs[i] = make_pair(a, b);
  }
  sort(pairs.begin(), pairs.end());
  long int sum = 0, drk = 0, p = 0;
  while (drk < m) {
    sum += pairs[p].first;
    pairs[p].second--;
    drk++;
    if (pairs[p].second == 0) {
      p++;
    }
  }
  cout << sum << endl;
  return 0;
}