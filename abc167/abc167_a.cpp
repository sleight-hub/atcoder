#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;

  if (s.length() + 1 != t.length()) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
