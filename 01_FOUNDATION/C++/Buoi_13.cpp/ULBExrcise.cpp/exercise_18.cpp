#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long minDist = LLONG_MAX;
    long long count = 0;

    for (int i = 1; i < N; i++) {
        long long diff = A[i] - A[i - 1];

        if (diff < minDist) {
            minDist = diff;
            count = 1;
        } else if (diff == minDist) {
            count++;
        }
    }

    cout << minDist << " " << count << "\n";
    return 0;
}
