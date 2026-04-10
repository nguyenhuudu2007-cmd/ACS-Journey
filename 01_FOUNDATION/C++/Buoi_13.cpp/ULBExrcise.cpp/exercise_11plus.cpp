#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, X;
    cin >> n >> X;

    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];

    auto lb = lower_bound(A.begin(), A.end(), X);
    auto ub = upper_bound(A.begin(), A.end(), X);

    // 1. >= X
    cout << (lb == A.end() ? -1 : lb - A.begin()) << endl;

    // 2. > X
    cout << (ub == A.end() ? -1 : ub - A.begin()) << endl;

    // 3. first X
    if(lb == A.end() || *lb != X) cout << -1 << endl;
    else cout << lb - A.begin() << endl;

    // 4. last X
    if(lb == A.end() || *lb != X) cout << -1 << endl;
    else cout << ub - A.begin() - 1 << endl;

    // 5. count X
    if(lb == A.end() || *lb != X) cout << 0 << endl;
    else cout << ub - lb << endl;
}
