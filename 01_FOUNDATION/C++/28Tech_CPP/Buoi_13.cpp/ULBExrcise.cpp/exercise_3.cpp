#include <bits/stdc++.h>
using namespace std;

int X;

/* Yêu cầu 1:
   Sắp theo |A[i] - X| tăng dần
   Nếu bằng nhau -> số nhỏ hơn đứng trước
*/
bool cmp1(int a, int b) {
    int da = abs(a - X);
    int db = abs(b - X);
    if (da != db) return da < db;
    return a < b;
}

/* Yêu cầu 2:
   Chẵn trước (tăng dần)
   Lẻ sau (giảm dần)
   Dùng 1 comparator duy nhất
*/
bool cmp2(int a, int b) {
    // khác chẵn lẻ
    if ((a % 2) != (b % 2))
        return a % 2 == 0;

    // cả hai chẵn
    if (a % 2 == 0)
        return a < b;

    // cả hai lẻ
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N >> X;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    vector<int> b = a;

    // Output yêu cầu 1
    sort(a.begin(), a.end(), cmp1);
    for (int x : a) cout << x << " ";
    cout << "\n";

    // Output yêu cầu 2
    sort(b.begin(), b.end(), cmp2);
    for (int x : b) cout << x << " ";
}
