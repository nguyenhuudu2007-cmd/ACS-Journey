#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    set<int>a;
    for ( int i=0;i<n;i++){
        int input1; cin>>input1;
        a.insert(input1);
    }
    int m; cin>>m;
    vector<int> queries(m);
    for ( int i=0;i<m;i++){
        cin>>queries[i];
    }
    for ( int i=0;i<m;i++){   
        if(a.find(queries[i])!=a.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}