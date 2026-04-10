#include <bits/stdc++.h>
using namespace std;

//Liệt kê các số nguyên tố trong ma trận 2 chiều
bool isPrime( int n){
    if( n<2 ) return false;
    if( n==2 ) return true;
    if( n%2==0 ) return false;
    for ( int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    bool found = false;
    for ( int i=0;i<n;i++){ 
        for ( int j=0;j<m;j++){
            if( isPrime(a[i][j])){
                cout<<a[i][j]<<' ';
                found = true;
            }
        }
    }
    if(!found){
        cout<<"NOT FOUND";
    }
    return 0;
}