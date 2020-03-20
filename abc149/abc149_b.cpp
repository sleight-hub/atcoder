#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  long long a, b, k;
  cin >> a >> b >> k;

  long long ans_t = 0LL;
  if (a - k > 0) {
    ans_t = a - k;
  }

  long long ans_a = 0LL;
  if (a - k > 0) {
    ans_a = b;
  } else if (a + b - k > 0) {
    ans_a = a + b - k;
  }
  cout << ans_t << " " << ans_a << endl;
  return 0;
}
