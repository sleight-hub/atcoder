#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  vector<int> w(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    sum = sum + w[i];
  }

  int mins = 10000;
  for (int i = 0; i < n - 1; i++) {
    int s1 = 0;
    for (int j = 0; j <= i; j++) {
      s1 = s1 + w[j];
    }
    mins = min(mins, abs(sum - 2 * s1));
  }
  cout << mins << endl;
  return 0;
}
