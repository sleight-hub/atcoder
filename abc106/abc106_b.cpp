#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i <= n; i = i + 2) {
    int cnt = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        cnt++;
      }
    }
    if (cnt == 8) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
