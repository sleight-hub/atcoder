#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力(n時m分)
  int n;
  double m;
  cin >> n >> m;

  double shortHand = 30 * (n % 12) + m / 2;
  double longHand = m * 6;
  double ans =
      fmin(fabs(shortHand - longHand), 360 - fabs(shortHand - longHand));

  // 出力
  cout << ans << endl;
  return 0;
}
