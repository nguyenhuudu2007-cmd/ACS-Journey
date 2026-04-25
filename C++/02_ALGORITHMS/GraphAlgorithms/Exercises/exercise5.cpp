#include <bits/stdc++.h>
using namespace std;

//chuẩn hoá 2
void viethoa ( string &s ){
    for ( int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}

int main(){
    string s;
    getline (cin,s);
    vector<string> res;
    stringstream ss(s);
    string tmp;
    while ( ss>>tmp ){
        res.push_back(tmp);
    }
    for ( int i=0;i<res.size()-1;i++){
        viethoa(res[i]);
        cout<<res[i]<<' ';
        if( i!=res.size()-2){
            cout<<' ';
        }
        else cout<<", "<;
    }
    viethoa[res[res.size()-1]];
    cout<<res.back()<<endl;
    cout<<res.back()<<", ";
}