#include <bits/stdc++.h>
using namespace std;

//số đẹp: số mà số liền kề chỉ cách nhau 1 đơn vị
int main(){
    string s; cin>>s;
    bool ok=true;
    for ( int i=0;i<s.size()-1;i++){
        if (abs(s[i]-s[i+1])==1){
            continue;
        }
        else{
            ok=false;
            break;
        }
    }
    if (ok) cout<<"YES";
    else cout<<"NO"<<endl;
}
            