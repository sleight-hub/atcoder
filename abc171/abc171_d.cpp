#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  map<int, int> mp;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (mp[a] == 0) {
      mp[a] = 1;
    } else {
      mp[a] = mp[a] + 1;
    }
    ans = ans + a;
  }

  int q;
  cin >> q;

  vector<int> b(q);
  vector<int> c(q);
  for (int i = 0; i < q; i++) {
    cin >> b[i] >> c[i];
  }

  for (int i = 0; i < q; i++) {
    int t = mp[b[i]];
    mp[c[i]] = mp[c[i]] + t;
    mp[b[i]] = 0;
    ans = ans + (c[i] - b[i]) * t;
    cout << ans << endl;
  }
  return 0;
}