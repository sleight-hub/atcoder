#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;

  bool flg = false;
  for (int i = 0; i < s.size(); i++) {
    if (s == t) {
      flg = true;
      break;
    }
    s = s.back() + s.substr(0, s.size() - 1);
  }
  if (flg) {
    cout << " Yes " << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}