#include <bits/stdc++.h>
using namespace std;

//Tách chuỗi thành chữ và số
int main(){
    string s; cin>>s;
    vector<string> chars;
    vector<string> nums;
    for ( int i=0;i<s.size();i++){
        if( s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            chars.push_back(s.substr(i,1));
        }
        else if( s[i]>='0' && s[i]<='9'){
            nums.push_back(s.substr(i,1));
        }
    }
    for ( auto c: chars ) cout<<c;
    cout<<endl;
    for ( auto n:nums ) cout<<n;
    cout<<endl;
}