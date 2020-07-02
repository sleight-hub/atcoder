#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  cout << max({a1, a2, a3}) - min({a1, a2, a3}) << endl;
  return 0;
}
