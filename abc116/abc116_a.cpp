#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans = 0;
  if (a * a + b * b == c * c) {
    ans = a * b / 2;
  } else if (b * b + c * c == a * a) {
    ans = b * c / 2;
  } else if (c * c + a * a == b * b) {
    ans = c * a / 2;
  }
  cout << ans << endl;
  return 0;
}
