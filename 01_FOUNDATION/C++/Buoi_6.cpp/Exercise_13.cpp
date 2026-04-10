#include <iostream>
using namespace std;

using ll = long long;
const ll MOD = 1000000007;

ll a[1001];

int main() {
    int n;
    cin >> n;

    ll sumMod = 0;
    ll mulMod = 1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] %= MOD;   // chuẩn hoá từ đầu
    }

    for (int i = 0; i < n; i++) {
        sumMod = (sumMod + a[i]) % MOD;
        mulMod = (mulMod * a[i]) % MOD;
    }

    cout << sumMod << " " << mulMod << endl;
    return 0;
}
