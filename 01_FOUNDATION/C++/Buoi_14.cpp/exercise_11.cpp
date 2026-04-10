#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n,l; cin>>n>>l;
    int a[n];
    for ( int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    double d=max( a[0]-0.0, l - a[n-1]*1.0);
    for ( int i=0;i<n-1;i++){
        d=max( d, (a[i+1]-a[i])*1.0/2);
    }
    cout<<fixed<<setprecision(10)<<d;
}
