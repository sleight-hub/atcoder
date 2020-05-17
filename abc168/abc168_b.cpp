#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int k;
  string s;
  cin >> k >> s;

  if (s.length() > k) {
    cout << s.erase(k) + "..." << endl;
    return 0;
  }

  cout << s << endl;
  return 0;
}
