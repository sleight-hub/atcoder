#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b;
  cin >> a >> b;

  int grp[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
  if (grp[a] == grp[b]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
