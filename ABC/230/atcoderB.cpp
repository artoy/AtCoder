#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  for (int i = 0; i < 4; i++) {
    string t = "";

    for (int j = 0; j < i; j++) {
      t = t + "oxx";
    }

    string ans;

    if (S == t) {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "x" + t) {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "xx" + t) {
      cout << "Yes" << endl;
      return 0;
    } else if (S == t + "o") {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "x" + t + "o") {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "xx" + t + "o") {
      cout << "Yes" << endl;
      return 0;
    } else if (S == t + "ox") {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "x" + t + "ox") {
      cout << "Yes" << endl;
      return 0;
    } else if (S == "xx" + t + "ox") {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}