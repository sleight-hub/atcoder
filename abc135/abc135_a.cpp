#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;

  cin >> a >> b;

  if ((a - b) % 2 == 0) {
    cout << min(a, b) + (max(a, b) - min(a, b)) / 2 << endl;
    return 0;
  }

  cout << "IMPOSSIBLE" << endl;
  return 0;
}
