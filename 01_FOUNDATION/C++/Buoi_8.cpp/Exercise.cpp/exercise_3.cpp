#include <set>
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    set<int>a;
    vector<int>b(n);
    for (int i=0;i<n;i++){
        cin>>b[i];
        a.insert(b[i]);
    }
    for (auto x:a){
        cout<<x<<' ';
    }
}