#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;
int main(){
    set<int>se;
    for ( int i=0;i<=10;i++){
        se.insert(i);
    }
    auto it=se.lower_bound(4);
    int dis=distance(se.begin(),it);
    cout<<dis<<endl;
    cout<<*it<<endl;
}