#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, t, a;
  cin >> n >> t >> a;

  double mint = DBL_MAX;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int h;
    cin >> h;
    double ht = t - 0.006 * h;
    if (abs(ht - a) < mint) {
      mint = abs(ht - a);
      ans = i;
    }
  }

  cout << ans << endl;
  return 0;
}
