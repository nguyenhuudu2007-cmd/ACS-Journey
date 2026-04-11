#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];
ll mark[1001] = {0}; // 0: chưa xuất hiện, 1: đã xuất hiện
void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]]++;
    }
}

void bubbleSort(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                ll temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    inputArray(n);
    bubbleSort(n);
    for (int i = 0; i < n; i++) {
        if (mark[a[i]] > 0) {
            cout << a[i] << " "<<mark[a[i]]<<endl;
            mark[a[i]] = 0;
        }
    }
    return 0;
}
