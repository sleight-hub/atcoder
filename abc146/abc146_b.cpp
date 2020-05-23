#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;

  int ans = 0;

  for (int i = 0; i < s.size(); i++) {
    s[i] = 'A' + (s[i] - 'A' + n) % 26;
  }
  cout << s << endl;
}
