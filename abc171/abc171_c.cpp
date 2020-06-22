#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;

  string ans;
  while (n > 0) {
    n--;
    ans.push_back('a' + n % 26);
    n = n / 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
