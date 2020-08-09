#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calc(int x) {
  int ret = 0;
  while (x % 100 == 0) {
    x = x / 100;
    ret++;
  }
  return ret;
}

int main() {
  int d, n;
  cin >> d >> n;
  int cnt = 0, val = 0;
  while (cnt < n) {
    val++;
    if (calc(val) == d) {
      ++cnt;
    }
  }
  cout << val << endl;
  return 0;
}