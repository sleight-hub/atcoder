#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int sum = 0;

  int tmp = n;
  while (tmp > 0) {
    sum = sum + tmp % 10;
    tmp = tmp / 10;
  }
  if (n % sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
