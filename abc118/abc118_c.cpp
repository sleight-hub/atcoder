#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int n;
  cin >> n;

  // 最初に1つ取って置く
  int a;
  cin >> a;

  // 2つめ以降
  for (int i = 0; i < n - 1; i++) {
    int b;
    cin >> b;

    // ユークリッドの互除法
    while (b != 0) {
      unsigned int r = a % b;
      a = b;
      b = r;
    }
  }

  // 出力
  cout << a << endl;
  return 0;
}
