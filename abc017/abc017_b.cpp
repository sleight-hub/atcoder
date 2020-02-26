#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string str;
  cin >> str;

  // choku語かどうか判定する
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'c' && str[i + 1] == 'h') {
      i = i + 1;
    } else if (str[i] == 'o' || str[i] == 'k' || str[i] == 'u') {
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  // 出力
  cout << "YES" << endl;
  return 0;
}
