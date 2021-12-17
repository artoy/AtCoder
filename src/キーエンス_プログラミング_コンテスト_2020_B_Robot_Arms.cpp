#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, ans = 0;
  cin >> N;

  vector<int> X(N), L(N);
  for (int i = 0; i < N; i++) {
    cin >> X.at(i) >> L.at(i);
  }

  vector<pair<int, int>> P(N);
  for (int i = 0; i < N; i++) {
    P.at(i).second = X.at(i) - L.at(i);
    P.at(i).first = X.at(i) + L.at(i);
  }

  sort(P.begin(), P.end());

  int current_length = -1000000000;
  for (int i = 0; i < N; i++) {
    if (current_length <= P.at(i).second) {
      ans++;
      current_length = P.at(i).first;
    }
  }

  cout << ans << endl;
}