#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    int N, K, Q;

    cin >> N >> K >> Q;

    vector<int> A(K);
    vector<int> L(Q);

    for (int i = 0; i < K; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < Q; i++) {
        cin >> L.at(i);
    }

    for(int i = 0; i < Q; i++) {
        if (A.at(L.at(i) - 1) == N) {
            continue;
        } else if (L.at(i) == K) {
            A.at(L.at(i) - 1)++;
        } else if (A.at(L.at(i)) > A.at(L.at(i) - 1) + 1) {
            A.at(L.at(i) - 1)++;
        }
    }

    for (int i = 0; i < K; i++) {
        cout << A.at(i);

        if (i == K - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
}