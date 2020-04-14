#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string c;
  cin >> n >> c;

  map<char, int> mp;
  mp['1'] = 0;
  mp['2'] = 0;
  mp['3'] = 0;
  mp['4'] = 0;

  for (int i = 0; i < n; i++) {
    if (c[i] == '1') {
      mp['1'] = mp['1'] + 1;
    } else if (c[i] == '2') {
      mp['2'] = mp['2'] + 1;
    } else if (c[i] == '3') {
      mp['3'] = mp['3'] + 1;
    } else if (c[i] == '4') {
      mp['4'] = mp['4'] + 1;
    }
  }

  cout << max(max(max(mp['1'], mp['2']), mp['3']), mp['4']) << " "
       << min(min(min(mp['1'], mp['2']), mp['3']), mp['4']) << endl;
  return 0;
}
