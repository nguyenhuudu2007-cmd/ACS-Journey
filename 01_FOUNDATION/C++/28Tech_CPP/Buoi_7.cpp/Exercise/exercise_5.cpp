#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a;
    for( int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    int m; cin>>m;
    int k; cin>>k;
    reverse(a.begin()+m, a.end());


    
    for ( auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(a.begin(), a.begin()+k+1);
    for( auto x:a){
        cout<<x<<" ";
    }
    return 0;
}