#include <bits/stdc++.h>
using namespace std;

bool isPrime ( int n ){
    if( n<2 ) return false;
    for ( int i=2;i*i<=n;i++){
        if( n%i==0) return false;
    }
    return true;
}

int main(){
    int n; cin>>n;
    int a[n][n];
    set<int> diagonalElements;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for ( int i=0;i<n;i++){
        if( isPrime( a[i][i])){
            diagonalElements.insert(a[i][i]);
        }
    }

    for ( int i=0;i<n;i++){
        if ( isPrime (a[i][n-1-i])){
             diagonalElements.insert(a[i][n-1-i]);
        }
    }

    cout<<diagonalElements.size()<<endl;
}