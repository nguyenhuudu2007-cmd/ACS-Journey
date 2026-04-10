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

    //tính tổng từng hàng
    for ( int i=0;i<n;i++){
        int sum=0;
        for ( int j=0;j<m;j++){
            sum+=a[i][j];
        }
        cout<<sum<<' ';
    }

    cout<<endl;

    //tính tổng từng cột
    for ( int j=0;j<m;j++){
        int sum=0;
        for ( int i=0;i<n;i++){
            sum+=a[i][j];
        }
        cout<<sum<<' ';
    }
}
