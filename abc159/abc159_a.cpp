#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int n, m;
  cin >> n >> m;

  int ans = n * (n - 1) / 2 + m * (m - 1) / 2;
  // 出力
  cout << ans << endl;
  return 0;
}
