#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  int cnt = 0;

  for (int i = 0; i < 3; i++) {
    if (s[i] == 'R') {
      cnt++;
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  ans = max(ans, cnt);
  cout << ans << endl;
  return 0;
}
