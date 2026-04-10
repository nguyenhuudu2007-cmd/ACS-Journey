#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    set<int>check1, check2, result;
    for ( int i=0;i<n;i++){
        int x; cin>>x;
        check1.insert(x);
        result.insert(x);
    }

    for( int j=0;j<m;j++){
        int y; cin>>y;
        check2.insert(y);
        result.insert(y);
    }

    for (auto x:check1){
        if (check2.find(x)!=check2.end()){
            result.erase(x);
        }
    }
    
    for ( auto x:result){
        cout<<x<<' ';
    }
    return 0;
}