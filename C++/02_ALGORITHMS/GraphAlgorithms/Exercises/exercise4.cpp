#include <bits/stdc++.h>
using namespace std;

//chuẩn hoá tên
void convert( string& s){
    s[0]=toupper(s[0]);
    for ( int i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
int main(){
    string s;
    getline(cin,s);
    vector<string>res;
    stringstream ss(s);
    string tmp;
    while ( ss>>tmp){
        res.push_back(tmp);
    }

    for ( int i=0;i<res.size();i++){
        convert(res[i]);
        cout<<res[i];
        if( i!=res.size()-1){
            cout<<' ';
        }
    }
    string ns;
    getline(cin,ns);
    if ( ns[2]!='/') ns="0"+ns;
    if ( ns[5]!='/') ns.insert(3,"0");
    cout<<ns<<endl;
}