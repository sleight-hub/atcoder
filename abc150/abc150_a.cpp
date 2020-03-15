#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int k, x;
  cin >> k >> x;

  if (500 * k >= x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
