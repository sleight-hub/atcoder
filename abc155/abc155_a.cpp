#include <bits/stdc++.h>
using namespace std;
int main() {
  // 数値の入力
  int a, b, c;
  cin >> a >> b >> c;

  // かわいそう判定
  if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
    cout << "Yes" << endl;
    return 0;
  }
  // 出力
  cout << "No" << endl;
  return 0;
}
