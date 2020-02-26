#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string str;
  cin >> str;

  int ans = 0;
  if (str[0] == '1') {
    ans++;
  }
  if (str[1] == '1') {
    ans++;
  }
  if (str[2] == '1') {
    ans++;
  }
  // 出力
  cout << ans << endl;
  return 0;
}
