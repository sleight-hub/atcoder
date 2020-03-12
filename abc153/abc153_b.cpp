#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int h, n;
  cin >> h >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    sum = sum + a;
    if (sum >= h) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  // 出力
  cout << "No" << endl;

  return 0;
}
