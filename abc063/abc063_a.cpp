#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  if (a + b >= 10) {
    cout << "error" << endl;
  } else {
    cout << a + b << endl;
  }

  return 0;
}
