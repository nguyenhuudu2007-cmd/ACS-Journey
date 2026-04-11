#include <bits/stdc++.h>
using namespace std;

//Bài 12: Khiêu vũ
int main(){
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for ( int i=0;i<n;i++) cin>>a[i];
    for ( int j=0;j<m;j++) cin>>b[j];
    sort(begin(a),end(a));
    sort(begin(b),end(b));
    int i=0; int j=0;
    int ans=0;
    while (i,n && j<m){
        if( a[i]>b[i]){
            ++ans;
            ++i; ++j;
        }
        else ++i;
    }
    cout<<ans;
    return 0;
}