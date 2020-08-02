#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  double d;
  cin >> n >> d;

  int cnt = 0;
  double x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    if (sqrt(x * x + y * y) <= d) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
