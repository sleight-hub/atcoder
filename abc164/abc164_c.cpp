#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  set<string> si;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    si.insert(s);
  }

  cout << si.size() << endl;
  return 0;
}
