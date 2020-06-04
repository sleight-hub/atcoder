#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;

  vector<int> prob(n, 0);  // 各問題の未正解:0,正解:1
  vector<int> wa(n, 0);    // 各問題の誤答数
  int ans = 0;             // 正答数

  for (int i = 0; i < m; i++) {
    int p;
    string s;
    cin >> p >> s;
    if (s == "WA" && prob[p - 1] != 1) {
      wa[p - 1]++;
    } else if (s == "AC" && prob[p - 1] != 1) {
      ans++;
      prob[p - 1] = 1;
    }
  }

  int pna = 0;  // ペナルティ数
  for (int i = 0; i < n; i++) {
    if (prob[i] == 1) {
      pna = pna + wa[i];
    }
  }

  cout << ans << " " << pna << endl;
  return 0;
}