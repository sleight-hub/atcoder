#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<ll> cnt(3, 0);

  // 1つ目の条件を満たすパターン数
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      cnt[0]++;
    }
    if (s[i] == 'G') {
      cnt[1]++;
    }
    if (s[i] == 'B') {
      cnt[2]++;
    }
  }
  ll ans = cnt[0] * cnt[1] * cnt[2];

  // 2つ目の条件を考慮する
  // 具体的には下記(a), (b)を満たすものを除去する
  // (a)  k = 2 * j - i
  // (b) s[i], s[j], s[k]がばらばら
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < j; i++) {
      int k = 2 * j - i;
      if (k >= n) {
        continue;
      }
      if (s[i] == s[j]) {
        continue;
      }
      if (s[j] == s[k]) {
        continue;
      }
      if (s[k] == s[i]) {
        continue;
      }
      ans--;
    }
  }
  cout << ans << endl;
  return 0;
}