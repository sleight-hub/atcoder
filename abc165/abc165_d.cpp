#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a;
  ll b, n;
  cin >> a >> b >> n;

  ll x = min(b - 1, n);

  cout << (a * x / b) - a * (x / b) << endl;
  return 0;
}
