#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int num;
  cin >> num;

  int a = num / 1000;
  int b = (num % 1000) / 100;
  int c = (num % 100) / 10;
  int d = num % 10;

  if ((a == b && b == c) || (b == c && c == d)) {
    cout << "Yes" << endl;
    return 0;
  }
  // 出力
  cout << "No" << endl;
  return 0;
}
