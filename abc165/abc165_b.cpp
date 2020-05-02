#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll x;
  cin >> x;

  ll mn = 100;
  ll ans = 0;
  while (mn < x) {
    mn = mn * 1.01;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
