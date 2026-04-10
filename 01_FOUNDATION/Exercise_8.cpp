#include <iostream>
using namespace std;

int a[1001];
int dem[1001] = {0};   

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (dem[a[i]] == 0) {
            cout << a[i] << " ";
            dem[a[i]] = 1;
        }
    }

    return 0;
}
