#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  char b;
  cin >> b;

  if (b == 'A') {
    cout << 'T';
  } else if (b == 'T') {
    cout << 'A';
  } else if (b == 'C') {
    cout << 'G';
  } else if (b == 'G') {
    cout << 'C';
  }
  return 0;
}
