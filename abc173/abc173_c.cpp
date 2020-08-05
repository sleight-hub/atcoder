#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int h, w, k;
  cin >> h >> w >> k;

  char c[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }

  int ans = 0;
  for (int mask1 = 0; mask1 < (1 << h); mask1++)
    for (int mask2 = 0; mask2 < (1 << w); mask2++) {
      int cnt = 0;
      for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++) {
          int g = (mask1 & (1 << i)), gd = (mask2 & (1 << j));
          if ((g | gd) == 0 && c[i][j] == '#') {
            cnt++;
          }
        }

      if (cnt == k) {
        ans++;
      }
    }

  cout << ans << endl;
  return 0;
}
