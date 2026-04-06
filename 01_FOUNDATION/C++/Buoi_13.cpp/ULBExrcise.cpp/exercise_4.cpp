#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    map<long long, vector<pair<long long,long long>>> mp;

    for (int i = 0; i < N; i++) {
        long long x, y;
        cin >> x >> y;
        long long d = x * x + y * y;
        mp[d].push_back({x, y});
    }

    for (auto &it : mp) {
        auto &v = it.second;
        sort(v.begin(), v.end()); // sort theo x rồi y
        for (auto &p : v) {
            cout << p.first << " " << p.second << "\n";
        }
    }
}
