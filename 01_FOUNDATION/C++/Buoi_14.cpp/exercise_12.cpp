#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n,s; cin>>n>>s;
    pair<int,int>a[n];
    for ( int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for ( int i=0;i<n;i++){
        if( s<=a[i].first){
            cout<<"NO";
            return 0;
        }
        else{
            s+=a[i].second;
        }
    }
    cout<<"YES";
    return 0;
 }