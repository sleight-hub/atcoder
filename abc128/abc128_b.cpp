#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  int s1 = stoi(s.substr(0, 2));
  int s2 = stoi(s.substr(2, 2));

  bool b1 = (0 < s1 && s1 <= 12);
  bool b2 = (0 < s2 && s2 <= 12);

  if (b1 && b2) {
    cout << "AMBIGUOUS" << endl;
  } else if (b1) {
    cout << "MMYY" << endl;
  } else if (b2) {
    cout << "YYMM" << endl;
  } else {
    cout << "NA" << endl;
  }
  return 0;
}
