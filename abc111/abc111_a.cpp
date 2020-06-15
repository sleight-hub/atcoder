#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  vector<char> n(3);
  for (int i = 0; i < 3; i++) {
    cin >> n[i];
  }

  for (int i = 0; i < 3; i++) {
    if (n[i] == '1') {
      cout << 9;
    } else {
      cout << 1;
    }
  }
  return 0;
}
