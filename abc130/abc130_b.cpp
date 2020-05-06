#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;

  int ans = 1;
  int d = 0;

  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    d = d + l;

    if (d <= x) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
