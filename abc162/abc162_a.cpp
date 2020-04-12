#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string n;
  cin >> n;

  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '7') {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
