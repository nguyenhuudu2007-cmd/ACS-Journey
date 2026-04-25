#include <bits/stdc++.h>
using namespace std;

//ký tự xuất hiện nhiều nhất và ít nhất
int main(){
    string s;
    getline(cin,s);
    map<string,int> cnt;
    stringstream ss(s);
    string tmp;
    while (ss>>s){
        cnt[tmp]++;
    }
    string res1, res2;
    int fre1=0; int fre2=1e9;

    for ( auto it: cnt ){
        if( it.second>=fre1){
            fre1=it.second;
            res1=it.first;
        }
        if ( it.second<=fre2){
            fre2=it.second;
            res2=it.first;
        }
    }
    cout<<res1<<' '<<fre1<<endl;
    cout<<res2<<' '<<fre2<<endl;
}