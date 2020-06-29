#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;

  if (n % k != 0) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
