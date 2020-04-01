#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;

  if (s.length() % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < s.length() / 2; i++) {
    if (s[i] != s[s.length() / 2 + i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
