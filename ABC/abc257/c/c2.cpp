#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int sum1 (vector<pair<long long, char>> v) {
    int ans = 0;

    for (int i = 0; i < v.size(); i++) {
        if(v.at(i).second == '1') {
            ans++;
        }
    }

    return ans;
}

int sum0 (vector<pair<long long, char>> v) {
    int ans = 0;

    for (int i = 0; i < v.size(); i++) {
        if(v.at(i).second == '0') {
            ans++;
        }
    }

    return ans;
}

int two (vector<pair<long long, char>> l, vector<pair<long long, char>> r) {
    if (sum1(l) - sum0(r) < 1 && sum1(l) - sum0(r) > -1) {
        return sum1(l) + sum0(r);
    } else if (sum1(l) - sum0(r)) {
        std::size_t const half_size = lines.size() / 2;
        std::vector<int> split_lo(lines.begin(), lines.begin() + half_size);
        std::vector<int> split_hi(lines.begin() + half_size, lines.end());
        return two(split_lo, split_hi);
    } else {

    }
}

int main() {
    long long N;
    string S;

    cin >> N >> S;

    vector<pair<long long, char>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v.at(i).first;
        v.at(i).second = S.at(i);
    }

    sort(v.begin(), v.end());

    std::size_t const half_size = v.size() / 2;
    std::vector<int> split_lo(v.begin(), v.begin() + half_size);
    std::vector<int> split_hi(v.begin() + half_size, v.end());

    cout << N - two(split_lo, split_hi);
}