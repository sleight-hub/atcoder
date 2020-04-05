#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> hi;
  int h;
  for (int i = 0; i < n; i++) {
    cin >> h;
    hi.push_back(h);
  }
  std::sort(hi.begin(), hi.end());

  if (n <= k) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 0;
  for (int i = 0; i < n - k; i++) {
    ans = ans + hi.at(i);
  }

  cout << ans << endl;
  return 0;
}
