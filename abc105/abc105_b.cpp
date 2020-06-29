#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int c = n / 4;
  int d = n / 7;

  for (int i = 0; i <= c; i++) {
    for (int j = 0; j <= d; j++) {
      if (4 * i + 7 * j == n) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}