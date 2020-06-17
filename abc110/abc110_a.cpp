#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << max(max(10 * a + b + c, a + 10 * b + c), a + b + 10 * c) << endl;
  return 0;
}
