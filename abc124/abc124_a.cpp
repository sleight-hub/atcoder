#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = 0;
  if (a > b) {
    ans = a + (a - 1);
  } else if (b > a) {
    ans = b + (b - 1);
  } else {
    ans = a + b;
  }
  cout << ans << endl;
  return 0;
}
