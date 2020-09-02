#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  cout << a + b + c + max({a, b, c}) * ((1 << k) - 1) << endl;
  return 0;
}
