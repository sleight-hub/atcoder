#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, l;
  cin >> n >> l;

  // 食べるべきリンゴを決める(絶対値が最小のりんご)
  int eat = 0;
  if (l < 0) {
    if (l + n <= 0) {
      eat = l + n - 1;
    } else {
      eat = 0;
    }
  } else {
    eat = l;
  }
  int ans = n * (2 * l + n - 1) / 2 - eat;

  cout << ans << endl;
  return 0;
}
