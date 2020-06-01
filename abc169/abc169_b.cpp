#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  ll ans = 1;
  ll LIM = 1e+18;
  for (int i = 0; i < n; i++) {
    if (LIM / ans < a[i]) {
      cout << -1 << endl;
      return 0;
    }
    ans = ans * a[i];
  }
  cout << ans << endl;
  return 0;
}
