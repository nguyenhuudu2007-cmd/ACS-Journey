#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;int a[10001];
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    sort (a,a+n,greater<int>()); //[x,y]=> sort(a+x,a+y+1)
    for( int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    vector <int> v(n);
    for ( int i=0;i<n;i++){
        cin>>v[i];
    }
    sort (v.begin(),v.end()); //[x,y]=> sort(v.begin()+x,v.begin()+y+1)
    for( int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}