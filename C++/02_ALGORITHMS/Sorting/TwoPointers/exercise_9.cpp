#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//tìm số cặp có hiệu số bằng k
int main(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for ( int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans=0;
    for ( int i=0;i<n;i++){
        auto it1=lower_bound(a.begin()+i+1, a.end(), a[i]+k);
        auto it2=upper_bound(a.begin()+i+1, a.end(), a[i]+k);
        ans+=it2 - it1;
    }
    cout<<ans;
}