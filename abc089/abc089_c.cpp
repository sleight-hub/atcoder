#include <bits/stdc++.h>
using namespace std;
int main() {
  // 数値の入力
  int n;
  cin >> n;

  long long inim = 0;
  long long inia = 0;
  long long inir = 0;
  long long inic = 0;
  long long inih = 0;
  // n人の名前の読み込みとカウント
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;

    if (str[0] == 'M') {
      inim++;
    }
    if (str[0] == 'A') {
      inia++;
    }
    if (str[0] == 'R') {
      inir++;
    }
    if (str[0] == 'C') {
      inic++;
    }
    if (str[0] == 'H') {
      inih++;
    }
  }

  long long ans = inim * inia * inir + inim * inia * inic + inim * inia * inih +
                  inim * inir * inic + inim * inir * inih + inim * inic * inih +
                  inia * inir * inic + inia * inir * inih + inia * inic * inih +
                  inir * inic * inih;
  // 出力
  cout << ans << endl;
  return 0;
}
