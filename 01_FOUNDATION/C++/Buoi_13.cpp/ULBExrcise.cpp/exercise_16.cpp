#include <bits/stdc++.h>
using namespace std;

long long countEqual(const vector<int>& A, int value){
    auto l = lower_bound(A.begin(), A.end(), value);
    auto r = upper_bound(A.begin(), A.end(), value);
    return r - l;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());

    long long ans = 0;
    for(int i = 0; i < N; i++){
        ans += countEqual(A, A[i] + K);
    }

    cout << ans;
    return 0;
}
