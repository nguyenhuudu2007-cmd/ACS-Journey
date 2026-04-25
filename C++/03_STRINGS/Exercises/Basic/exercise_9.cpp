#include <bits/stdc++.h>
using namespace std;

//chèn "28tech" vào chỉ số k của chuỗi
int main(){
    string s; 
    getline(cin,s);
    int k; cin>>k;
    string res="";
    for ( int i=0;i<s.size();i++){
        if( i==k ) res+="28tech";
        res+=s[i];
    }
    cout<<res<<endl;
}