// 未完成 TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> graph(N);

  int A, B;
  for (int i = 0; i < M; i++) {
    cin >> A >> B;
    graph.at(B - 1).push_back(A);
  }

  priority_queue<int, vector<int>, greater<int>> inZero;
  for (int i = 0; i < N; i++) {
    if (graph.at(i).size() == 0) {
      inZero.push(i + 1);
    }
  }

  vector<int> ans;
  int top;
  while (inZero.size() > 0) {
    top = inZero.top();
    ans.push_back(top);
    inZero.pop();

    for (int i = 0; i < N; i++) {
      auto isFind = find(graph.at(i).begin(), graph.at(i).end(), top);
      if (isFind != graph.at(i).end()) {
        for (int j = 0; j < graph.at(i).size(); j++) {
          if (graph.at(i).at(j) == top) {
            graph.at(i).erase(graph.at(i).begin() + j);
          }
        }

        if (graph.at(i).size() == 0) {
          inZero.push(i + 1);
        }
      }
    }
  }

  bool cycle = false;
  for (int i = 0; i < N; i++) {
    if (graph.at(i).size() > 0) {
      cycle = true;
      break;
    }
  }

  if (cycle) {
    cout << "-1" << endl;
  } else {
    for (int i = 0; i < ans.size(); i++) {
      if (i == ans.size() - 1) {
        cout << ans.at(i) << endl;
      } else {
        cout << ans.at(i) << " ";
      }
    }
  }
}