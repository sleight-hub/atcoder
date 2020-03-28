#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  long long x;
  cin >> x;

  cout << (x / 500) * 1000 + ((x % 500) / 5) * 5 << endl;
  return 0;
}
