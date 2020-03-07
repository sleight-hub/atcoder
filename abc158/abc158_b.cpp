#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  long long n, a, b;
  cin >> n >> a >> b;

  long long ans = 0;

  // 操作が全部終わるまでの青
  ans = n / (a + b) * a;

  // 端数
  if (n % (a + b) != 0) {
    ans = ans + min(a, n % (a + b));
  }

  // 出力
  cout << ans << endl;
  return 0;
}
