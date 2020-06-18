#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  for (int i = n; i < n + 111; i++) {
    if (i % 111 == 0) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
