#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  char c11, c12, c13, c21, c22, c23;
  cin >> c11 >> c12 >> c13 >> c21 >> c22 >> c23;

  if (c11 == c23 && c12 == c22 && c13 == c21) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
