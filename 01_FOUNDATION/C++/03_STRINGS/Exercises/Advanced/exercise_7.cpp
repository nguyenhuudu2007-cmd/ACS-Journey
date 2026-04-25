#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int left=0;
    int right=s.size()-1;
    bool ok=true;
    while (left>right){
        if( s[left]==s[right]){
            continue;
        }else{
            ok=false;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}