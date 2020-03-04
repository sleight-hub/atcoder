#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  int a[3][3];
  cin >> a[0][0] >> a[0][1] >> a[0][2];
  cin >> a[1][0] >> a[1][1] >> a[1][2];
  cin >> a[2][0] >> a[2][1] >> a[2][2];

  int n;
  int arrb[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (a[j][k] == b) {
          arrb[j][k] = 1;
        }
      }
    }
  }

  if ((arrb[0][0] == 1 && arrb[0][1] == 1 && arrb[0][2] == 1) ||
      (arrb[1][0] == 1 && arrb[1][1] == 1 && arrb[1][2] == 1) ||
      (arrb[2][0] == 1 && arrb[2][1] == 1 && arrb[2][2] == 1) ||

      (arrb[0][0] == 1 && arrb[1][0] == 1 && arrb[2][0] == 1) ||
      (arrb[0][1] == 1 && arrb[1][1] == 1 && arrb[2][1] == 1) ||
      (arrb[0][2] == 1 && arrb[1][2] == 1 && arrb[2][2] == 1) ||

      (arrb[0][0] == 1 && arrb[1][1] == 1 && arrb[2][2] == 1) ||
      (arrb[2][0] == 1 && arrb[1][1] == 1 && arrb[0][2] == 1)) {
    cout << "Yes" << endl;
    return 0;
  }

  // 出力
  cout << "No" << endl;
  return 0;
}