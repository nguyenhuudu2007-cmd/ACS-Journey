#include <bits/stdc++.h>
using namespace std;

//ký tự lặp lại đầu tiên
int main(){
    string s;
    getline ( cin,s );
    int mark[256]={0};
    char res=' ';
    for ( int i=0;i<s.size();i++){
        mark[s[i]]++;
        if ( mark[s[i]]==2){
            res=s[i];
            break;
        }
    }
    if ( res==' ' ) cout<<"NOT FOUND";
    else cout<<res<<endl;
}
