#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for ( int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int maxSum=0;
    for ( int i=0;i<=k;i++){
        maxSum+=a[i];
    }
    for ( int i=k+1;i<n;i++){
        maxSum-=a[i];
    }
    cout<<maxSum;
    return 0;
}