#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int mi = INT_MAX;
  int ma = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mi = min(a, mi);
    ma = max(a, ma);
  }

  cout << ma - mi << endl;
  return 0;
}
