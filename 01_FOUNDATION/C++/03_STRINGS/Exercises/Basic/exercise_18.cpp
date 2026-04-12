#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

bool cmp ( string a, string b ){
    return a.size()<b.size();
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss>>word){
        v.push_back(word);
    }

    sort(v.begin(), v.end(), cmp );

    for ( auto &x:v ){
        cout<<x<<' ';
    }
    cout<<endl;
}