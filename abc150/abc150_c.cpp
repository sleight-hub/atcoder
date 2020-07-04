#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> p(n), q(n);
  for (int i = 0; i < n; i++) {
    cin >> p.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> q.at(i);
  }

  vector<int> v(n);
  for (int i = 1; i <= n; i++) {
    v.at(i - 1) = i;
  }

  int a = 0;
  int b = 0;
  int cnt = 0;
  do {
    if (v == p) {
      a = cnt;
    }
    if (v == q) {
      b = cnt;
    }
    cnt++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(a - b) << endl;
  return (0);
}
