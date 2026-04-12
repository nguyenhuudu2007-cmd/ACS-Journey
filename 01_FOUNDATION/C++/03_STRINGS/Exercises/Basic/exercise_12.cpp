#include <bits/stdc++.h>
using namespace std;

//đếm từ in hoa
int main(){
    string s;
    getline(cin,s);
    int cnt=0;
    for ( int i=0;i<s.size();i++){
        if( s[i]>='A'&& s[i]<='Z'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}