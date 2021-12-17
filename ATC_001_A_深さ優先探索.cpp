#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<vector<char>> maze (500, vector<char>(500));

bool search (int x, int y) {
  if (x < 0 || x >= h || y < 0 || y >= w) {
    return false;
  } else if (maze.at(x).at(y) == 'g') {
    return true;
  } else if (maze.at(x).at(y) == '#') {
    return false;
  }

  maze.at(x).at(y) = '#';

  return search(x-1, y) || search(x+1, y) || search(x, y-1) || search(x, y+1);
}

int main() {
  cin >> h >> w;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> maze.at(i).at(j);
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (maze.at(i).at(j) == 's') {
        if (search(i, j)) {
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
      }
    }
  }
}