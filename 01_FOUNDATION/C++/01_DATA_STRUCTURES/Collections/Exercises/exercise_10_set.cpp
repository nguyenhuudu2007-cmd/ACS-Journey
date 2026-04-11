#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    set<int>check_n;
    for ( int i=0;i<n;i++){
        int x; cin>>x;
        check_n.insert(x);
    }
    set<int>check_m;
    for ( int j=0;j<m;j++){
        int y; cin>>y;
        check_m.insert(y);
    }
    
    // Tìm phần tử chung
    for (auto x : check_n) {            // O(n)
        if (check_m.find(x) != check_m.end()) {  // O(log m)
            cout << x << ' ';
        }
    }
    
    return 0;
}