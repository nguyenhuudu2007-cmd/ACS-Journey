#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main(){
    int n; cin>>n;
    set<char>se;
    for ( int i=0;i<n;i++){
        char x; cin>>x;
        se.insert(x);
    }
    cout<<se.size()<<endl;
    for ( auto a:se){
        cout<<a<<' ';
    }
    cout<<endl;
    for ( auto it=se.rbegin();it!=se.rend();it++){
        cout<<*it<<' ';
    }
}