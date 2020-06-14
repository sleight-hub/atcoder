#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x, n;
  cin >> x >> n;

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  int ans = INT_MAX;
  int minAbs = INT_MAX;
  for (int i = -100; i <= 200; i++) {
    bool include = false;
    for (int j = 0; j < n; j++) {
      if (i == p[j]) {
        include = true;
      }
    }

    if (!include && abs(x - i) < minAbs) {
      ans = i;
      minAbs = abs(x - i);
    }
  }

  cout << ans << endl;
  return 0;
}
