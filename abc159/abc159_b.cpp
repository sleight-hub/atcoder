#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string s;
  cin >> s;

  int len = s.length() - 1;
  bool palindrome = true;

  for (int i = 0; i < len; i++) {
    if (s[i] != s[len - i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  for (int i = 0; i < (len - 1) / 2; i++) {
    if (s[i] != s[(len - 1) / 2 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 出力
  cout << "Yes" << endl;
  return 0;
}
