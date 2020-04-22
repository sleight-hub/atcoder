#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int cnt = 0;
  // 基本的に1,2,3,....,n-2,n-1,nと並んでいるはず
  // 上記から逸脱しているものを入れ替えてあげる
  // 入れ替えるのは1回なので、逸脱しているのは2つまでであれば対応可
  for (int i = 0; i < n; i++) {
    int pi;
    cin >> pi;
    if (pi != i + 1) {
      cnt++;
    }
  }

  if (cnt <= 2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
