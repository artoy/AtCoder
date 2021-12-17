#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
queue<P> q;

vector<vector<char>> maze(50, vector<char>(50));
vector<vector<int>> d(50, vector<int>(50));

int r, c, sy, sx, gy, gx, ans;
int maxint = 10000;

int search(int y, int x) {
  int minD = d.at(y).at(x);

  if (maze.at(y-1).at(x) == '.') {
    q.push(P(y-1, x));
    d.at(y-1).at(x) = minD + 1;
    // 被った場所をキューに入れないようにキューに入れた時点でそこを通った扱いにする！
    maze.at(y-1).at(x) = '#';

    if (y-1 == gy-1 && x == gx-1) {
      return minD + 1;
    }
  }

  if (maze.at(y+1).at(x) == '.') {
    q.push(P(y+1, x));
    d.at(y+1).at(x) = minD + 1;
    maze.at(y+1).at(x) = '#';

    if (y+1 == gy-1 && x == gx-1) {
      return minD + 1;
    }
  }

  if (maze.at(y).at(x-1) == '.') {
    q.push(P(y, x-1));
    d.at(y).at(x-1) = minD + 1;
    maze.at(y).at(x-1) = '#';

    if (y == gy-1 && x-1 == gx-1) {
      return minD + 1;
    }
  }

  if (maze.at(y).at(x+1) == '.') {
    q.push(P(y, x+1));
    d.at(y).at(x+1) = minD + 1;
    maze.at(y).at(x+1) = '#';

    if (y == gy-1 && x+1 == gx-1) {
      return minD + 1;
    }
  }

  return maxint;
}

int main() {
  P point;
  int result;
  cin >> r >> c >> sy >> sx >> gy >> gx;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> maze.at(i).at(j);
    }
  }

  q.push(P(sy-1, sx-1));
  d.at(sy-1).at(sx-1) = 0;

  while (true) {
    point = q.front();
    q.pop();

    maze.at(sy-1).at(sx-1) = '#';
    result = search(point.first, point.second);

    if (result < maxint) {
      ans = result;
      break;
    }
  }

  cout << ans << endl;
}