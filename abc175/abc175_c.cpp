#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);

  ll straight = min(k, x / d);
  k = k - straight;
  x = x - straight * d;

  if (k % 2 == 0) {
    cout << x << endl;
  } else {
    cout << d - x << endl;
  }

  return 0;
}
