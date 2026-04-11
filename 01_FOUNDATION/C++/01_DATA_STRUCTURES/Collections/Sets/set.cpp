#include <iostream>
#include <set>
#include <iterator>
using namespace std;

//set, multiset, unordered_set
int main(){
    set<int>se;
    se.insert(2);
    se.insert(3);
    se.insert(3);
    se.insert(4);
    cout<<se.size()<<endl;
    
    // Print elements
    for(auto x : se){
        cout << x << " ";
    }
    cout << endl;

    // Iterator
    for ( set<int>::iterator it=se.begin(); it!=se.end();it++){
        cout<<*it<<' ';
    }
}