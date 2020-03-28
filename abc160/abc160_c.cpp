#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int k, n;
  cin >> k >> n;

  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int dis = 0;
  for (int i = 0; i < n - 1; i++) {
    dis = max(dis, arr[i + 1] - arr[i]);
  }
  dis = max(dis, k + arr[0] - arr[n - 1]);

  cout << k - dis << endl;
  return 0;
}
