#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  if (s.find('a') != std::string::npos && s.find('b') != std::string::npos &&
      s.find('c') != std::string::npos) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
