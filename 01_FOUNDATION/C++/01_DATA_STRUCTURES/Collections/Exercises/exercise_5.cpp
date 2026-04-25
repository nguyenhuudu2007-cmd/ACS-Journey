#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    map<char,int>a;
    vector<char> chars(n);
    for ( int i=0;i<n;i++){
        cin>>chars[i];
        a[chars[i]]++;
    }
    for ( auto x:a){
        cout<<x.first<<' '<<x.second<<endl;
    }
}