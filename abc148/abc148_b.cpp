#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;

  string ans;
  for (int i = 0; i < n; i++) {
    ans = ans + s[i] + t[i];
  }

  cout << ans << endl;
  return 0;
}
