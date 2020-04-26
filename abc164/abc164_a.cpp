#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int s, w;
  cin >> s >> w;
  if (w >= s) {
    cout << "unsafe" << endl;
  } else {
    cout << "safe" << endl;
  }
  return 0;
}
