#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double rate = 380000.0;
  int n;
  cin >> n;
  vector<double> x(n);
  vector<string> u(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> u[i];
  }

  double ans = 0;
  for (int i = 0; i < n; i++) {
    if (u[i] == "BTC") {
      ans = ans + rate * x[i];
    } else {
      ans = ans + x[i];
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
}
