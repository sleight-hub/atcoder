#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int ans = 0;
  int count = 0;
  for (int i = 0; i <= s.size(); i++) {
    if (s[i] == 'A' || s[i] == 'G' || s[i] == 'C' || s[i] == 'T') {
      count++;
      ans = max(ans, count);
    } else
      count = 0;
  }
  cout << ans << endl;
  return 0;
}
