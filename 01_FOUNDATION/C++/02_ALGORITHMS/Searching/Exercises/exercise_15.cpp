#include <bits/stdc++.h>
using namespace std;

int countInRange(const vector<int>& A, int L, int R){
    return upper_bound(A.begin(), A.end(), R)
         - lower_bound(A.begin(), A.end(), L);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end()); // sort 1 lần

    int Q;
    cin >> Q;
    while(Q--){
        int L, R;
        cin >> L >> R;
        cout << countInRange(A, L, R) << "\n";
    }

    return 0;
}
