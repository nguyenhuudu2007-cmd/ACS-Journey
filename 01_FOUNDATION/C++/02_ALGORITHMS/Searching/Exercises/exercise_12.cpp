#include <bits/stdc++.h>
using namespace std;

int firstPos1( vector<int>&A, int x){
    auto lb=lower_bound(A.begin(), A.end(), x);
    if( lb==A.end() || *lb!=x ) return -1;
    return lb-A.begin();;
}

int firstPos2( vector<int>a, int n, int x){
    int left=0; int right=n-1;
    while (left<=right){
        int mid=(left+right)/2;
        if( a[mid]<x){
            left=mid+1;
        }
        else if( a[mid]>x){
            right=mid-1;
        }
        else{
            if( mid==0 || a[mid-1]<x) return mid;
            else right=mid-1;
        }
    }
    return -1;
}

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << firstPos1(A, x) << "\n";
    cout << firstPos2(A, n, x) << "\n";

    return 0;
}

