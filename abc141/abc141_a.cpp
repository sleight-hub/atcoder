#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;

  if (s == "Sunny") {
    cout << "Cloudy" << endl;
    return 0;
  } else if (s == "Cloudy") {
    cout << "Rainy" << endl;
    return 0;
  } else if (s == "Rainy") {
    cout << "Sunny" << endl;
    return 0;
  }
}
