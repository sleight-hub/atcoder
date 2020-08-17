#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());

  int ans = 0;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      for (int k = 0; k < j; ++k) {
        if (vec[k] != vec[j] && vec[i] != vec[j] && vec[k] + vec[j] > vec[i]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}
