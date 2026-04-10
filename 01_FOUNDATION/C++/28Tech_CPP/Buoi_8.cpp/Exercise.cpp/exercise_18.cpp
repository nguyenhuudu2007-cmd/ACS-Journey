#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
    string s;
    set<string>se;
    while (cin>>s){
        se.insert(s);
    }
    cout<<se.size()<<endl;
    cout<<*se.begin()<<endl;
    cout<<*se.rbegin()<<endl;
    return 0;
}