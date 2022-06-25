#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int X, N;
    cin >> N >> X;

    string S = "";

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < N; j++) {
            char c = char('A' + i);
            S = S + c;
        }
    }

    cout << S.at(X - 1) << endl;

}