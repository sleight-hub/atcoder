#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int a, b;
  cin >> a >> b;

  string ans;

  if (a > b) {
    for (int i = 0; i < a; i++) {
      ans = ans + to_string(b);
    }
  } else {
    for (int i = 0; i < b; i++) {
      ans = ans + to_string(a);
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}
