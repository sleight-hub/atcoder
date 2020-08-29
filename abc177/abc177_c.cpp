#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<ll> a(n);
  vector<ll> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sum[n - 1] = 0;
  ll mod = 1000000007;
  for (int i = n - 2; 0 <= i; i--) {
    sum[i] = sum[i + 1] + a[i + 1];
    sum[i] = sum[i] % mod;
  }

  ll ans = 0;

  for (int i = 0; i < n; i++) {
    ans = ans + a[i] * sum[i];
    ans = ans % mod;
  }

  cout << ans << endl;
  return 0;
}
