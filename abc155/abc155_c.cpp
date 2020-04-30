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
    if (mp[s] == 0) {
      mp[s] = 1;
    } else {
      mp[s] = mp[s] + 1;
    }
  }

  int maxValue = 0;
  for (pair<string, int> p : mp) {
    maxValue = max(maxValue, p.second);
  }

  for (pair<string, int> p : mp) {
    if (p.second == maxValue) {
      cout << p.first << endl;
    }
  }
  return 0;
}
