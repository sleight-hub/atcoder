#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a;
  cin >> a;

  int ans = 0;
  for (int i = 2; i <= sqrt(a); i++) {
    int now = i;

    // p^eで割っていく
    while (a % now == 0) {
      a = a / now;
      now *= i;
      ans++;
    }

    // 素数pで割れるだけ割る
    while (a % i == 0) {
      a = a / i;
    }
  }

  // 1ではない場合は自身をカウントする
  if (a != 1) {
    ans++;
  }

  cout << ans << endl;
  return 0;
}