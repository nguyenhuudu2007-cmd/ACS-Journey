#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;
vector<vector<int>> a;  // declare grid

void loang(int i, int j) {
    a[i][j] = 0;  // mark visited
    cout << "Di tham o " << i << ' ' << j << endl;
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            loang(i1, j1);
        }
    }
}

int main() {
    cin >> n >> m;
    a.assign(n, vector<int>(m));  // initialize grid

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                ++cnt;
                cout << "Xet mien co o bat dau la: " << i << ' ' << j << ":\n";
                loang(i, j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
