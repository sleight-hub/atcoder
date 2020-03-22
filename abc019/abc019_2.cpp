#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string s;
  cin >> s;

  string ans;
  char temp;
  int cnt = 1;

  for (int i = 0; i < (int)s.size(); i++) {
    temp = s[i];

    if (i != (int)s.size() && temp == s[i + 1]) {
      cnt++;
    } else {
      ans = ans + temp + to_string(cnt);
      cnt = 1;
    }
  }
  // 出力
  cout << ans << endl;
  return 0;
}
