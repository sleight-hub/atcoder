#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> h(n);
  for (int i = 0; i < n; ++i) {
    cin >> h[i];
  }

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    bool view = true;
    for (int j = 0; j < i; ++j) {
      if (h[j] > h[i]) {
        view = false;
        break;
      }
    }
    if (view) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}