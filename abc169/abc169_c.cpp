#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll a;
  string s;
  cin >> a >> s;

  ll b = (s[0] - '0') * 100 + (s[2] - '0') * 10 + (s[3] - '0');

  cout << a * b / 100 << endl;
  return 0;
}
