#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  map<int, ll> amp;
  map<int, ll> bmp;

  amp[0] = 0;
  for (int i = 1; i <= n; i++) {
    ll a;
    cin >> a;
    amp[i] = amp[i - 1] + a;
  }
  bmp[0] = 0;
  for (int i = 1; i <= m; i++) {
    ll b;
    cin >> b;
    bmp[i] = bmp[i - 1] + b;
  }

  int ans = 0;
  for (int i = 0, j = m; i <= n; i++) {
    if (amp[i] > k) {
      break;
    }
    while (amp[i] + bmp[j] > k) {
      j--;
    }
    ans = max(i + j, ans);
  }

  cout << ans << endl;
  return 0;
}
