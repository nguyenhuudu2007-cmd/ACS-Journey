#include <iostream>
using namespace std;
using ll = long long;

ll a[1000005];

void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    inputArray(n);

    // tổng cửa sổ đầu tiên
    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    cout << sum << " ";

    // trượt cửa sổ
    for (int i = k; i < n; i++) {
        sum = sum - a[i - k] + a[i];
        cout << sum << " ";
    }

    return 0;
}
