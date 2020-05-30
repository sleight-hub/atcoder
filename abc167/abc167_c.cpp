#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n, m, x;
  cin >> n >> m >> x;

  vector<vector<int>> a(n, vector<int>(m));
  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    cin >> c[i];
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int ans = INT_MAX;
  int all = 1 << n;  // シフト演算子, 2^nが代入される

  // 2^n回ループ(n冊の参考書を買う/買わない)
  for (int mask = 0; mask < all; mask++) {
    vector<int> level(m);
    int cost = 0;

    for (int i = 0; i < n; i++) {
      // 買う/買わないを判定している個所
      if ((mask >> i) & 1) {
        cost += c[i];
        for (int j = 0; j < m; j++) {
          level[j] += a[i][j];
        }
      }
    }

    // M個すべてのアルゴリズムの理解度がX以上かどうか判定
    bool ok = true;
    for (int j = 0; j < m; j++) {
      if (level[j] < x) {
        ok = false;
      }
    }
    if (ok) {
      ans = min(ans, cost);
    }
  }

  if (ans == INT_MAX)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}
