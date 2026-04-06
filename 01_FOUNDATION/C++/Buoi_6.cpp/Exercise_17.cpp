#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];
void inputArray( ll a[], int n ){
    for( int i=0;i<n;i++ ){
        cin>>a[i];
    }
}

bool isSymmetricArray(ll a[], ll n){
    for ( int i =0;i<n/2;i++ ){
        if( a[i] != a[n-i-1] ){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin>>n;
    inputArray( a, n );
    if( isSymmetricArray( a, n ) ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}