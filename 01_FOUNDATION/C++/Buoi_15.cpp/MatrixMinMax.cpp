#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int main(){
    int n,m; cin>>n>>m;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int minVal=INT_MAX;
    int maxVal=INT_MIN;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            minVal=min(minVal,a[i][j]);
            maxVal=max(maxVal,a[i][j]); 
        }
    }
    cout<<minVal<<endl;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            if( a[i][j]==minVal){
                cout<<i+1<<' '<<j+1;
            }
        }
    }
    cout<<maxVal<<endl;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            if( a[i][j]==maxVal){
                cout<<i+1<<' '<<j+1;
            }
        }
    }
}