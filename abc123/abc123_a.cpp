#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a;
  cin >> a;
  int mina = a;
  int maxa = a;

  for (int i = 0; i < 4; i++) {
    cin >> a;
    mina = min(mina, a);
    maxa = max(maxa, a);
  }
  int k;
  cin >> k;

  if (maxa - mina > k) {
    cout << ":(" << endl;
  } else {
    cout << "Yay!" << endl;
  }
  return 0;
}
