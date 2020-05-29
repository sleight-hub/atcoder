#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int maxl = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    sum = sum + l;
    maxl = max(maxl, l);
  }
  if (2 * maxl < sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
