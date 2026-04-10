#include <bits/stdc++.h>
using namespace std;

//children arrangement problem
int main(){
    int n; cin>>n;
    vector<int>a(n);
    for ( int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    int ans=1; int l=0; int r=n-1;
    while ( l<r){
        if( a[l]+a[r]<=4){
            ans++;
            l++;
            r--;
        }
        else{
            ans++;
            r--;
        }
    }
    cout<<ans;
}
    