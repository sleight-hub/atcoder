#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int n;
  string s;
  cin >> n >> s;

  int ans = 0;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      ans++;
      i = i + 2;
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}
