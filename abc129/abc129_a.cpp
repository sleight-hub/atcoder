#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int p, q, r;
  cin >> p >> q >> r;

  cout << min(min(p + q, q + r), p + r) << endl;
  return 0;
}
