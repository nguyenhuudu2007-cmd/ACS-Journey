#include <iostream>
using namespace std;

int a[100001];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {   
            if (a[i] + a[j] == k) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
