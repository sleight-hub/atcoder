#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> pi(n);
  vector<int> minp(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    pi[i] = p;

    if (i > 0) {
      minp[i] = min(pi[i], minp[i - 1]);
    } else {
      minp[i] = pi[i];
    }
    if (minp[i] == pi[i]) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
