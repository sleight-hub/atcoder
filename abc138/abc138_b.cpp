#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  double temp;
  double ai;
  for (int i = 0; i < n; i++) {
    cin >> ai;
    temp = temp + 1 / ai;
  }

  cout << setprecision(16) << 1 / temp << endl;
  return 0;
}
