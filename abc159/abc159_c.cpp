#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  double l;
  cin >> l;

  double ans = pow(l / 3, 3);
  // 出力
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
}
