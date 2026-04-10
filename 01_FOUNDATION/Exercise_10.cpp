#include <iostream>
#include <array>
using namespace std;
int a[1001];
bool IsPrime ( int n ) {
    if ( n < 2 ) return false;
    for ( int i = 2; i * i <= n; i++ ) {
        if ( n % i == 0 ) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int total=0;
    for ( int i = 0; i < n; i++ ){
        cin >> a[i];
        total+=a[i];
    }
    int leftSum=0;
    for( int i=0;i<n;i++){
        int rightSum=total-leftSum-a[i];
        if( IsPrime(leftSum) && IsPrime(rightSum) ){
            cout<<i<<" ";
        }
        leftSum+=a[i];
    }
    
    return 0;
}