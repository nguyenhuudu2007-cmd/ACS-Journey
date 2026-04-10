#include <iostream>
#include <set>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    set<int>result;
    for( int i=0;i<n;i++){
        int x; cin>>x;
        result.insert(x);
    }
    for( int j=0;j<m;j++){
        int y; cin>>y;
        result.insert(y);
    }
    for ( auto it=result.rbegin(); it!=result.rend();it++){
        cout<<*it<<' ';
    }
}