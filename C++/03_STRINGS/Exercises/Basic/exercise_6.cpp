#include <bits/stdc++.h>
using namespace std;

//sắp xếp số trong chuỗi
int main(){
    string s;
    cin>>s;
    vector<string>v;
    for ( int i=0;i<s.size();i++){
        if( s[i]>'0' && s[i]<='9'){
            v.push_back(s.substr(i,1));
        }
    }
    sort (v.begin(), v.end());
    for ( int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
}