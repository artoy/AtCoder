#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  int ans = 0;
  cin >> n >> m;

  vector<vector<int>> g (m, vector<int>(2));
  for (int i = 0; i < m; i++) {
    cin >> g.at(i).at(0) >> g.at(i).at(1);
  }

  vector<int> perm (n-1);
  for (int i = 0; i < n-1; i++) {
    perm.at(i) = i+2;
  }

  vector<int> value;
  vector<int> r;
  do {
    r = perm;
    r.push_back(1);

    for (int i = 0; i < n-1; i++) {
      if (r.at(i) > r.at(i+1)) {
        value = {r.at(i+1), r.at(i)};
      } else {
        value = {r.at(i), r.at(i+1)};
      }

      auto result = find(g.begin(), g.end(), value);
      if (result == g.end()) {
        break;
      } else if (i == n-2) {
        ans++;
      }
    }
  } while (next_permutation(perm.begin(), perm.end()));

  cout << ans << endl;
}