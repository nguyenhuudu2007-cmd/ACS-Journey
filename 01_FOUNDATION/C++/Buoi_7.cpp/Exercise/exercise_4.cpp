#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    for( int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    int left; cin>>left;
    int right; cin>>right;
    for( auto it=v.begin()+left; it!=v.begin() + right + 1; ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    for( auto it=v.rbegin() + (n - 1 - right); it!=v.rbegin() + (n - left); ++it){
        cout<<*it<<" ";
    }
    return 0;
}
