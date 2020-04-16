#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans = 0;

  cout << max(0, c - a + b) << endl;
  return 0;
}
