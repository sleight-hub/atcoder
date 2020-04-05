#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll abso(ll a) {
  if (a < 0) {
    return -a;
  }
  return a;
}

int main() {
  ll n, k;
  cin >> n >> k;

  if (n <= k) {
    if (n <= abs(n - k)) {
      cout << n << endl;
      return 0;
    }

    cout << abs(n - k) << endl;
    return 0;
  }

  ll s = n / k;
  ll a = n % k;

  if (a <= abs(a - k)) {
    cout << a << endl;
    return 0;
  }

  cout << abs(a - k) << endl;
  return 0;
}
