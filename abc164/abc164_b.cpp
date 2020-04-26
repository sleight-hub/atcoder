#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a / d + min(1, a % d) >= c / b + min(1, c % b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
