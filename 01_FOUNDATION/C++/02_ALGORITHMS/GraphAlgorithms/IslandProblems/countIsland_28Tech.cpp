#include <bits/stdc++.h>
using namespace std;

int dy[4] = {0, 0, 1, -1};
int dx[4] = {1, -1, 0, 0};
void countIsland(int a[100][100], int n, int m, int i, int j) {
    a[i][j] = 0; // Đánh dấu đã thăm
    for (int k = 0; k < 4; k++) {
        int newY = i + dy[k];
        int newX = j + dx[k];
        if (newY >= 0 && newY < n && newX >= 0 && newX < m && a[newY][newX] == 1) {
            countIsland(a, n, m, newY, newX);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int islandCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                countIsland(a, n, m, i, j);
                islandCount++;
            }
        }
    }

    cout << islandCount << endl;
    return 0;
}