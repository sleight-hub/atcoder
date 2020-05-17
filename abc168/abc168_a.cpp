#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int s = n % 10;
  if (s == 2 || s == 4 || s == 5 || s == 7 || s == 9) {
    cout << "hon" << endl;
  } else if (s == 0 || s == 1 || s == 6 || s == 8) {
    cout << "pon" << endl;
  } else {
    cout << "bon" << endl;
  }
  return 0;
}
