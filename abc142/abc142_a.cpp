#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  cout << fixed << setprecision(10) << (double)(n / 2 + n % 2) / n << endl;
  return 0;
}
