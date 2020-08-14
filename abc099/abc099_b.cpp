#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = 0;

  cout << (b - a) * (b - a + 1) / 2 - b << endl;
  return 0;
}
