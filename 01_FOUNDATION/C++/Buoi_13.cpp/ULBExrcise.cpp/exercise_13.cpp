#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end()); // bắt buộc

    auto ub = upper_bound(a.begin(), a.end(), x);

    // chỉ số cuối cùng của phần tử <= x
    if (ub == a.begin()) cout << -1;
    else cout << (ub - a.begin() - 1);

    return 0;
}
