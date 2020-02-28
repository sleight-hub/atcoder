#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int n;
  cin >> n;

  set<int> st;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (st.count(a) == 1) {
      cout << "NO" << endl;
      return 0;
    } else {
      st.insert(a);
    }
  }

  // 出力
  cout << "YES" << endl;
  return 0;
}
