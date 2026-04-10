#include <iostream>
using namespace std;
using ll = long long;
int main(){
    int n; cin>>n;
    ll a[1001];
    for( int i=0;i<n;i++ ){
        cin>>a[i];
    }
    ll max1=a[0], max2=-1e9-1;
    for( int i=1;i<n;i++ ){
        if( a[i]>max1 ){
            max2=max1;
            max1=a[i];
        }
        else if( a[i]>max2 && a[i]<max1 ){
            max2=a[i];
        }
    }
    cout<<max1<<" "<<max2<<endl;
    return 0;
}