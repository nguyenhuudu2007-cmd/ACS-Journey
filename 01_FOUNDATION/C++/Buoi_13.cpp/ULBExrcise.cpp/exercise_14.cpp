#include <bits/stdc++.h>
using namespace std;

int countGreater(const vector<long long>& B, long long x){
    return B.end() - upper_bound(B.begin(), B.end(), x);
}

int countGreaterEqual(const vector<long long>& B, long long x){
    return B.end() - lower_bound(B.begin(), B.end(), x);
}

int countLessEqual(const vector<long long>& B, long long x){
    return upper_bound(B.begin(), B.end(), x) - B.begin();
}

int countLess(const vector<long long>& B, long long x){
    return lower_bound(B.begin(), B.end(), x) - B.begin();
}


int main(){
    int n, q;
    cin >> n >> q;

    vector<long long> B(n);
    for(int i = 0; i < n; i++) cin >> B[i];

    sort(B.begin(), B.end()); // Bắt buộc phải sắp xếp

    while(q--){
        long long x;
        cin >> x;
        cout << countGreater(B, x) << "\n";
        cout << countGreaterEqual(B, x) << "\n";
        cout << countLessEqual(B, x) << "\n";
        cout << countLess(B, x) << "\n";
    }

    return 0;
}