#include <bits/stdc++.h>
using namespace std;

int tong( int a[][100], int n, int m){
    int sum=0;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            sum+=a[i][j];
        }
    }
    return sum;
}

int a[100][100];
int main(){
    int n, m; cin>>n;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<100;j++){
            cin>>a[i][j];
        }
    }
    cout<<tong(a,n,100);
}