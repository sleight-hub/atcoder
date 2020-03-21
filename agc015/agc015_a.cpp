#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  long long n, a, b;
  cin >> n >> a >> b;

  if (a > b) {
    // 出力
    cout << "0" << endl;
    return 0;
  } else if (n == 0 || (n == 1 && a != b)) {
    // 出力
    cout << "0" << endl;
    return 0;
  } else {
    // 総和のとりうる最大値 (n-1)*b + a
    // 総和のとりうる最小値 (n-1)*a + b
    // 最大値～最小値まではすべて作成可能
    // 出力
    cout << (b - a) * (n - 2) + 1 << endl;
    return 0;
  }
}
