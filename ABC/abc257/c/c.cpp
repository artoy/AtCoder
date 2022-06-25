#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main() {
    long long N;
    string S;

    cin >> N >> S;

    vector<long long> adult, child;
    long long c;
    for (int i = 0; i < N; i++) {
        cin >> c;

        if (S.at(i) == '1') {
            adult.push_back(c);
        } else {
            child.push_back(c);
        }
    }

    sort(adult.begin(), adult.end());
    sort(child.begin(), child.end(), greater<long long>{});

    if (adult.size() == 0 || child.size() == 0) {
        cout << N << endl;
        return 0;
    }

    long long wronga = 0, wrongc = 0, ansa = adult.size(), ansc = child.size();
    for (int i = 0; i < child.size(); i++) {
        if (adult.at(0) <= child.at(i)) {
            wronga++;
        } else {
            ansa = N - wronga;
            break;
        }
    }
    for (int i = 0; i < adult.size(); i++) {
        if (child.at(0) >= adult.at(i)) {
            wrongc++;
        } else {
            ansa = N - wrongc;
            break;
        }
    }

    cout << max(ansa, ansc) << endl;
}