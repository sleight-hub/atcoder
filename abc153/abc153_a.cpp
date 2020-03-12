#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int h, a;
  cin >> h >> a;

  int ans = h / a + min(h % a, 1);
  // 出力
  cout << ans << endl;
  return 0;
}
