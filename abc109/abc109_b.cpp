#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<string> w(n);
  set<string> st;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    w[i] = s;
    st.insert(s);
    if (i != 0 && w[i - 1][w[i - 1].size() - 1] != w[i][0]) {
      cout << "No" << endl;
      return 0;
    }
  }

  if (st.size() != n) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
