#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[1000005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        bool ok = false;

        // kiểm tra bên trái
        if (i > 0 && a[i] * a[i - 1] < 0) {
            ok = true;
        }

        // kiểm tra bên phải
        if (i < n - 1 && a[i] * a[i + 1] < 0) {
            ok = true;
        }

        if (ok) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
