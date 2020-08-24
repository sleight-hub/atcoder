#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  char dif = 'A' - 'a';

  cout << char(s1[0] + dif) << char(s2[0] + dif) << char(s3[0] + dif) << endl;
  return 0;
}
