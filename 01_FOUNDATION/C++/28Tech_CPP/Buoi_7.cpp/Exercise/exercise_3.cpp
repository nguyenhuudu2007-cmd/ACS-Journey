#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a;
    for( int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for( auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(a.begin(), a.end(), greater<int>());
    for( auto x:a){
        cout<<x<<" ";
    }
    return 0;
}
