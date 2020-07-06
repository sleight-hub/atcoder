#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  map<string, int> mp;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    mp[s] = mp[s] + 1;
  }

  cout << "AC x " << mp["AC"] << endl;
  cout << "WA x " << mp["WA"] << endl;
  cout << "TLE x " << mp["TLE"] << endl;
  cout << "RE x " << mp["RE"] << endl;
  return 0;
}
