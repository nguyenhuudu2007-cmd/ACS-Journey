#include <iostream>
#include <cmath>
using namespace std;
int a[1000001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = abs(a[0] - a[1]);  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(a[i] - a[j]);
            if (diff < ans)
                ans = diff;
        }
    }
    cout << ans;
}
