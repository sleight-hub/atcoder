#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  if (-a + b <= 0) {
    cout << "delicious" << endl;
  } else if (-a + b <= x) {
    cout << "safe" << endl;
  } else {
    cout << "dangerous" << endl;
  }

  return 0;
}
