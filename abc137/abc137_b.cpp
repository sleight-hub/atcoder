#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int k, x;
  cin >> k >> x;

  for (int i = x - k + 1; i < x + k; i++) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
