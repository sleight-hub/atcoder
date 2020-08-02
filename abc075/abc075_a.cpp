#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b) {
    cout << c << endl;
  } else if (b == c) {
    cout << a << endl;
  } else {
    cout << b << endl;
  }

  return 0;
}
