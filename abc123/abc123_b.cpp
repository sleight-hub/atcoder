#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 提供にかかる時間
int maxtime(int x) { return (x + 9) / 10 * 10; }

// 最後に出すメニューはメニューだけの時間で良い
int remtime(int x) { return maxtime(x) - x; }

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int sum = maxtime(a) + maxtime(b) + maxtime(c) + maxtime(d) + maxtime(e);
  sum -= max({remtime(a), remtime(b), remtime(c), remtime(d), remtime(e)});
  cout << sum << endl;
  return 0;
}