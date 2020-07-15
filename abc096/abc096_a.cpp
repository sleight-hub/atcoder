#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  if (a <= b) {
    cout << a << endl;
  } else {
    cout << a - 1 << endl;
  }
  return 0;
}
