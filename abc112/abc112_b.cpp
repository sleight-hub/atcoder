#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, t;
  cin >> n >> t;

  int c, ti;
  int ans = INT_MAX;

  for (int i = 0; i < n; i++) {
    cin >> c >> ti;
    if (ti <= t && c < ans) {
      ans = c;
    }
  }
  if (ans == INT_MAX) {
    cout << "TLE" << endl;
    return 0;
  }
  cout << ans << endl;
  return 0;
}
