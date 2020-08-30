#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int k;
  cin >> k;

  int x = 7 % k;
  set<int> s;
  for (int i = 1; i <= k; i++) {
    if (x == 0) {
      cout << i << endl;
      return 0;
    }
    x = (x * 10 + 7) % k;
  }

  
  cout << -1 << endl;
  return 0;
}
