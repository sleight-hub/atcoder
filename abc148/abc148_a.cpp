#include <bits/stdc++.h>
using namespace std;
int main() {
  // 文字列の入力
  string a, b;
  cin >> a >> b;

  if (a == "1" && b == "2") {
    cout << "3" << endl;
  } else if (a == "2" && b == "1") {
    cout << "3" << endl;
  } else if (a == "1" && b == "3") {
    cout << "2" << endl;
  } else if (a == "3" && b == "1") {
    cout << "2" << endl;
  } else if (a == "2" && b == "3") {
    cout << "1" << endl;
  } else if (a == "3" && b == "2") {
    cout << "1" << endl;
  }
  return 0;
}
