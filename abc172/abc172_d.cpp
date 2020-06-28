#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> divisor(n + 1, 1);
  for (int i = 2; i <= n; i++) {
    int j = i;
    while (j <= n) {
      divisor[j] = divisor[j] + 1;
      j = j + i;
    }
  }

  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    ans = ans + i * divisor[i];
  }

  cout << ans << endl;
  return 0;
}
