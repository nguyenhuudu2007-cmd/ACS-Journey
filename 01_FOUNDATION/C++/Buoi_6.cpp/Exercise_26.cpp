#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1001];
    int mark[1001] = {0};   // 0: chưa xuất hiện, 1: đã xuất hiện

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mark[a[i]] == 0) {
            mark[a[i]] = 1;
        }
    }

    int distinct = 0;
    for (int i = 0; i <= 1000; i++) {
        if (mark[i] == 1) distinct++;
    }

    cout << distinct;
    return 0;
}
