#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int ai;
    cin >> ai;
    n = n - ai;
    if (n < 0) {
      cout << "-1" << endl;
      return 0;
    }
  }

  cout << n << endl;
  return 0;
}
