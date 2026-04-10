#include <iostream>
using namespace std;

int a[1001];
int cnt[10001] = {0};

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (cnt[a[i]] > 0) {
            cout << a[i] << " " << cnt[a[i]] << endl;
            cnt[a[i]] = 0;   
        }
    }

    return 0;
}
