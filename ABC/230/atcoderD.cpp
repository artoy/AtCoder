#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;

  vector<pair<int, int>> wall(N);
  for (int i = 0; i < N; i++) {
    cin >> wall.at(i).first >> wall.at(i).second;
  }

  sort(wall.begin(), wall.end(), [](pair<int, int> left, pair<int, int> right) {
    return left.second < right.second;
  });

  int ans = 0, right = -1;
  for (int i = 0; i < N; i++) {
    if (wall.at(i).first > right) {
      ans++;
      right = wall.at(i).second + D - 1;
    }
  }

  cout << ans << endl;
}
