#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxa = a[0];
  ll ans = 0;
  for (int i = 1; i < n; i++) {
    if (maxa > a[i]) {
      ans = ans + (maxa - a[i]);
    }
    maxa = max(maxa, a[i]);
  }
  cout << ans << endl;
  return 0;
}
