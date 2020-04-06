#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;

  int* arr = new int[n];

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    arr[i] = ai;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      ans = ans + arr[i] * arr[j];
    }
  }
  cout << ans << endl;
  return 0;
}
