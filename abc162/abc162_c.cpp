#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  int t;
  while (b != 0) {
    t = a % b;
    a = b;
    b = t;
  }
  return a;
}

int main() {
  ll k;
  cin >> k;

  ll ans = 0;
  for (ll a = 1; a <= k; a++) {
    for (ll b = 1; b <= k; b++) {
      for (ll c = 1; c <= k; c++) {
        ll t = gcd(a, b);
        ans = ans + gcd(t, c);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
