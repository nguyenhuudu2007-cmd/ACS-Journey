#include <bits/stdc++.h>
using namespace std;

//Xâu panagram
int main(){
    string s;
    cin>>s;
    set<char> se;
    for ( char x : s ){
        x=tolower(x);
        se.insert(x);
    }

    if( se.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}