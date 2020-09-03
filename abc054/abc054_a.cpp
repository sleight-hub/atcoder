#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == 1) {
    a = a + 13;
  }
  if (b == 1) {
    b = b + 13;
  }
  if (a > b) {
    cout << "Alice" << endl;

  } else if (a < b) {
    cout << "Bob" << endl;

  } else {
    cout << "Draw" << endl;
  }
  return 0;
}
