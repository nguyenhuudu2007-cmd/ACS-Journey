#include <bits/stdc++.h>
using namespace std;
 //Bài 14: Vắt sữa bò
 int main(){
    int n; cin>>n;
    vector<int>a(n);
    for ( int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    sort(a.begin(),a.end(), greater<int>());
    for (  int i=0;i<n;i++){
        if( a[i]>i) ans+=(a[i]-i);
        else break;
    }
    cout<<ans;
    return 0;
 }