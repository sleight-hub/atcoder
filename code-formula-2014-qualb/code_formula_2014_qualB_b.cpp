#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string n;
  cin >> n;

  int e = 0;
  int o = 0;

  for (int i = 0; i < n.length(); i++) {
    if ((n.length() - i) % 2 == 1) {
      o = o + (n[i] - '0');
    } else {
      e = e + (n[i] - '0');
    }
  }
  // 出力
  cout << e << " " << o << endl;
  return 0;
}
