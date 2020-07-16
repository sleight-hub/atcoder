#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  char a, b, c;
  cin >> a >> b >> c;

  int ans = 700;
  if (a == 'o') {
    ans = ans + 100;
  }
  if (b == 'o') {
    ans = ans + 100;
  }
  if (c == 'o') {
    ans = ans + 100;
  }

  cout << ans << endl;
  return 0;
}
