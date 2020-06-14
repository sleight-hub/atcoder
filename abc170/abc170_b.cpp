#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x, y;
  cin >> x >> y;

  if (y % 2 == 0 && 2 * x <= y && y <= 4 * x) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
