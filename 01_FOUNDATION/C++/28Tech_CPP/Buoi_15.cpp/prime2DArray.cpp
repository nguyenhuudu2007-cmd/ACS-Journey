#include <bits/stdc++.h>
using namespace std;
 bool isPrime ( int n){
    if( n<2) return false;
    if ( n==2 ) return true;
    for ( int i=2;i<n;i++){
        if( n%i==0 ) return false;
    }
    return true;
}

int a[100][100];
int main(){
    int n, m; cin>>n>>m;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            if( isPrime(a[i][j])){
                cout<<a[i][j]<<' ';
            }
        }
    }
}