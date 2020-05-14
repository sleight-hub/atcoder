#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  string t = s;
  s.at(k - 1) = tolower(s.at(k - 1));
  cout << s << endl;
  return 0;
}
