#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  // S の先頭の文字は大文字の A である。
  if (s[0] != 'A') {
    cout << "WA";
    return 0;
  }

  // S の先頭から 3 文字目と末尾から 2 文字目の間（両端含む）に
  // 大文字の C がちょうど 1 個含まれる。
  int cnt = 0;
  for (int i = 2; i < s.length() - 1; i++) {
    if (s[i] == 'C') {
      cnt++;
    }
  }
  if (cnt != 1) {
    cout << "WA";
    return 0;
  }

  //  A, C を除く  S のすべての文字は小文字である。
  for (int i = 0; i < s.length(); i++) {
    if (!(s[i] == 'A' || s[i] == 'C' || ('a' <= s[i] && s[i] <= 'z'))) {
      cout << "WA";
      return 0;
    }
  }
  cout << "AC";
  return 0;
}