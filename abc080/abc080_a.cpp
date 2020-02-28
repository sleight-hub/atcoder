#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int n, a, b;
  cin >> n >> a >> b;

  // 出力
  cout << min(n * a, b) << endl;
  return 0;
}
