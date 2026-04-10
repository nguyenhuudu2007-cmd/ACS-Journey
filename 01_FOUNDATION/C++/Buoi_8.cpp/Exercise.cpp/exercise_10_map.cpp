#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    map<int,int>check;
    for ( int i=0;i<n;i++){
        int x; cin>>x;
        check[x]=1;
    }
    for ( int j=0;j<m;j++){
        int y; cin>>y;
        if (check[y] == 1) {
            check[y] = 2;
        }
    }
    for ( auto x:check ){
        if( x.second==2){
            cout<<x.first<<' ';
        }
    }
}