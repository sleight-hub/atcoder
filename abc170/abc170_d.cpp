#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  set<int> a;
  vector<int> num(1000001, 0);
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    num[temp]++;
    a.insert(temp);
  }

  for (int x : a) {
    for (int i = 2 * x; i < 1000001; i = i + x) {
      num[i]++;
    }
  }

  int ans = 0;
  for (int x : a) {
    if (num[x] == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}