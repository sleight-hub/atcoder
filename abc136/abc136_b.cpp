#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if ((int)log10(i) % 2 == 0) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
