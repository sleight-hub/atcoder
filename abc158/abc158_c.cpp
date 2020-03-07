#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int a, b;
  cin >> a >> b;

  for (int i = 0; i <= 10000; i++) {
    if ((int)(i * 0.08) == a) {
      if ((int)(i * 0.1) == b) {
        cout << i << endl;
        return 0;
      }
    }
  }

  // 出力
  cout << "-1" << endl;
  return 0;
}
