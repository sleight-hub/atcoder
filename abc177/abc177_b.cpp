#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;

  int m = 0;
  int cnt = 0;

  for (int i = 0; i <= s.size() - t.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (s[i + j] == t[j]) {
        cnt++;
      }
    }
    m = max(m, cnt);
    cnt = 0;
  }

  cout << t.size() - m << endl;
  return 0;
}
