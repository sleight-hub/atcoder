#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  int k;
  cin >> s >> k;

  if (s.length() < k) {
    cout << 0 << endl;
    return 0;
  }

  set<string> st;
  for (int i = 0; i < s.length() - k + 1; i++) {
    st.insert(s.substr(i, k));
  }

  cout << st.size() << endl;
  return 0;
}
