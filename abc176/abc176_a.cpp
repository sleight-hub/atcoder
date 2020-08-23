#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x, t;
  cin >> n >> x >> t;

  cout << (n / x + min(1, n % x)) * t << endl;
  return 0;
}
