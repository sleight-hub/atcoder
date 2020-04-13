#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int step(int a) {
  if (a > 0) {
    return 1;
  }
  return 0;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << (b - 1) / (a - 1) + step((b - 1) % (a - 1)) << endl;
  return 0;
}
