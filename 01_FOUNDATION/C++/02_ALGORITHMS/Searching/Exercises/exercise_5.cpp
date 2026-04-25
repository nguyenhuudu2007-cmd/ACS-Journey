#include <bits/stdc++.h>
using namespace std;

bool cmp(
    const pair<int, pair<int,int>>& a,
    const pair<int, pair<int,int>>& b
) {
    if (a.first != b.first)
        return a.first < b.first;                 // so x

    if (a.second.first != b.second.first)
        return a.second.first < b.second.first;   // so y

    return a.second.second < b.second.second;     // so z
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, pair<int,int>>> a(n);

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a[i] = {x, {y, z}};
    }

    sort(a.begin(), a.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << a[i].first << " "
             << a[i].second.first << " "
             << a[i].second.second << "\n";
    }
}
