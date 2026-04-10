#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int gcd ( ll a, ll b ) {
    while ( b ) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n; cin>>n;
    ll a[1001];
    for( int i=0;i<n;i++ ){
        cin>>a[i];
    }
    ll result=a[0];
    for( int i=1;i<n;i++ ){
        result=gcd( result, a[i] );
    }
    cout<<result<<endl;
    return 0;
}