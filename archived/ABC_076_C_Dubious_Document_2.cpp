#include <bits/stdc++.h>
using namespace std;

int main() {
  string S_dash, T;
  cin >> S_dash >> T;

  string partial_S_dash, comp_S, ans = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
  bool flag = false;
  for (int i = 0; i < S_dash.length() - T.length() + 1; i++) {
    partial_S_dash = S_dash.substr(i, T.length());
    for (int j = 0; j < T.length(); j++) {
      if (!(partial_S_dash.at(j) == T.at(j) || partial_S_dash.at(j) == '?')) {
        break;
      }

      if (j == T.length() - 1) {
        comp_S = S_dash;
        comp_S.replace(i, T.length(), T);

        for (int i = 0; i < comp_S.length(); i++) {
          if (comp_S.at(i) == '?') {
            comp_S.at(i) = 'a';
          }
        }

        if (comp_S < ans) {
          ans = comp_S;
        }

        flag = true;
      }
    }
  }

  if (!flag) {
    cout << "UNRESTORABLE" << endl;
  } else {
    cout << ans << endl;
  }
}