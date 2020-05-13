#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int r, d, x;
  cin >> r >> d >> x;

  ll ans = x;
  for (int i = 0; i < 10; i++) {
    ans = r * ans - d;
    cout << ans << endl;
  }
  return 0;
}
