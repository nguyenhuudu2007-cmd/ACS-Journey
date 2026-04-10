#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//Bài 17: Cặp số tổng bằng K
int firstPos( int arr[], int l, int r, int x){
    int res=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (arr[mid]==x) 
        {
            res=mid;
            r=mid-1;
        }
        else if (arr[mid]<x){
            l=mid+1;
        }
        else r=mid-1;
    }
    return res;
}
int main(){
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for ( int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans=0;
    for ( int i=0;i<n;i++){
        auto it1=lower_bound(a.begin()+i+1, a.end(), k - a[i]);
        auto it2=upper_bound(a.begin()+i+1, a.end(), k - a[i]);
        ans+=it2 - it1;
    }
    cout<<ans;
}