#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  if (a1 + a2 + a3 >= 22) {
    cout << "bust" << endl;
  } else {
    cout << "win" << endl;
  }
  return 0;
}
