#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;

  vector<int> s(n);
  vector<char> c(n);

  for (int i = 0; i < m; i++) {
    cin >> s[i] >> c[i];
  }

  // round を使っている理由
  // https://blog.ase.co.jp/2017/11/21/pow%E9%96%A2%E6%95%B0%E7%B5%A1%E3%81%BF%E3%81%A7%E7%99%BA%E7%94%9F%E3%81%97%E3%81%9F%E4%B8%8D%E5%85%B7%E5%90%88%E3%81%A8%E5%8E%9F%E5%9B%A0/#4.%E4%BD%95%E5%87%A6%E3%82%92%E3%81%A9%E3%81%AE%E3%82%88%E3%81%86%E3%81%AB
  int min = 0;
  if (n != 1) {
    min = (int)round(pow(10, n - 1));
  }
  for (int i = min; i < (int)round(pow(10, n)); i++) {
    bool ok = true;
    string num = to_string(i);
    for (int j = 0; j < m; j++) {
      if (num[s[j] - 1] != c[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
