#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());
  int ans = 0;
  for (int i = 0; i < k; i++) {
    ans = ans + p[i];
  }

  cout << ans << endl;
  return 0;
}
