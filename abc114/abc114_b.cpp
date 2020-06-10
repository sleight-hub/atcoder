#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int m = 999;
  for (int i = 0; i < s.length() - 2; i++) {
    int t = stoi(s.substr(i, 3));
    m = min(m, abs(753 - t));
  }

  cout << m << endl;
  return 0;
}
