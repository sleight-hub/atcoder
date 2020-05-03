#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;

  set<int> sunuke;
  for (int i = 1; i <= n; i++) {
    sunuke.insert(i);
  }
  for (int i = 0; i < k; i++) {
    int dk;
    cin >> dk;
    for (int j = 0; j < dk; j++) {
      int d;
      cin >> d;
      sunuke.erase(d);
    }
  }

  cout << sunuke.size() << endl;

  return 0;
}
