#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  double m;
  cin >> n >> m;

  double* a = new double[n];
  double sum = 0;
  for (int i = 0; i < n; i++) {
    double temp;
    cin >> temp;
    sum = sum + temp;
    a[i] = temp;
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= (sum / 4 / m)) {
      cnt++;
    }
  }

  if (cnt >= m) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
