#include <bits/stdc++.h>
using namespace std;

int main(){
  long N, A, B, P, Q, R, S;
  cin >> N >> A >> B >> P >> Q >> R >> S;

  vector<vector<char>> field (Q - P + 1, vector<char>(S - R + 1));

  for (long i = 0; i < Q - P + 1; i ++) {
    for (long j = 0; j < S - R + 1; j++) {
      field.at(i).at(j) = '.';
    }
  }

  for (long k = max(max(1 - A, 1 - B), max(P - A, R - B)); k < min(min(N - A, N - B), min(Q - A, S - B)) + 1; k++) {
    // if (A + k >= P && A + k <= Q && B + k >= R && B + k <= S) {
      field.at(A + k - P).at(B + k - R) = '#';
    // }
  }

  for (long k = max(max(1 - A, B - N), max(P - A, B - S)); k < min(min(N - A, B - 1), min(Q - A, B - R)) + 1; k++) {
    // if (A + k >= P && A + k <= Q && B - k >= R && B - k <= S) {
      field.at(A + k - P).at(B - k - R) = '#';
    // }
  }

  for (long i = 0; i < Q - P + 1; i++) {
    for (long j = 0; j < S - R + 1; j++) {
      if (j == S - R) {
        cout << field.at(i).at(j) << endl;
      } else {
        cout << field.at(i).at(j);
      }
    }
  }
}
