#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, d;
  cin >> n >> d;

  cout << n / (2 * d + 1) + min(1, n % (2 * d + 1)) << endl;
  return 0;
}
