#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[s.length() - 1 - i]) {
      ans++;
    }
    if (i + 1 >= s.length() / 2) {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}
