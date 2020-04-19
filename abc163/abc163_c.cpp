#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  map<int, int> mp;

  for (int i = 0; i < n - 1; i++) {
    int ai;
    cin >> ai;
    mp[ai] = mp[ai] + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << mp[i + 1] << endl;
  }
  return 0;
}
