#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  if (a <= 9 && b <= 9) {
    cout << a * b << endl;
    return 0;
  }

  cout << -1 << endl;
  return 0;
}
