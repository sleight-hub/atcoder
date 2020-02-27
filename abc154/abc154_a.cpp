#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string s, t, u;
  int a, b;
  cin >> s >> t >> a >> b >> u;

  if (s == u) {
    a = a - 1;
  } else if (t == u) {
    b = b - 1;
  }
  // 出力
  cout << a << ' ' << b << endl;
  return 0;
}
