#include <bits/stdc++.h>
using namespace std;

//chuẩn hoá 2
void viethoa ( string &s ){
    for ( int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--){
        string s;
        getline (cin,s);
        for ( char &x:s) x=tolower(x);
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
            else cout<<", ";
        }
        string ns=res.back();
        int n=res.size()-1;
        string email="";
        email+=res[n-1];
        for ( int i=0;i<n-1;i++){
            email+=res[i][0];
        }
        email+="@xyz.edu.vn";
        stringstream ss2(ns);
        string number;
        while (getline(ss2, number,'/')){
            int x=stoi(number);
            cout<<x<<' ';
        }
        cout<<endl;
    }
}