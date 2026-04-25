#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string>v;
    while (ss>>word){
        v.push_back(word);
    }

    sort (v.begin(),v.end());

    for ( auto &x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for ( auto &x:v ){
        cout<<x<<' ';
    }
    cout<<endl;
}