#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  vector<int> r(n + 1, 0);

  for (int i = 0; i < n; i++) {
    if (r[i] != 0) {
      cout << i << endl;
      // 検索
      auto ait = std::find(a.begin(), a.end(), i + 1);
      size_t ai = std::distance(a.begin(), ait);
      cout << b[ai] - 1 << endl;
      r[b[ai] - 1] = i + 1;

      auto bit = std::find(b.begin(), b.end(), i + 1);
      size_t bi = std::distance(b.begin(), bit);
      r[a[bi] - 1] = i + 1;
    }
  }

  for (int i = 0; i <= n; i++) {
    if (r[i] == 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  for (int i = 1; i <= n; i++) {
    cout << r[i] << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n + 1);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> pre(n + 1);
  queue<int> que;
  que.push(1);
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (auto v : adj[u]) {
      if (!pre[v]) {
        pre[v] = u;
        que.push(v);
      }
    }
  }

  if (count(pre.begin() + 2, pre.end(), 0)) {
    cout << "No" << '\n';
  } else {
    cout << "Yes" << '\n';
    for (int i = 2; i <= n; ++i) {
      cout << pre[i] << '\n';
    }
  }
}
