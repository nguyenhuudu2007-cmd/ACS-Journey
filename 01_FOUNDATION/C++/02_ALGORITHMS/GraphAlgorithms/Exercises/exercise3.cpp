#include <bits/stdc++.h>
using namespace std;

//kiểm tra xâu con
int main(){
    string str, substr;
    getline(cin,str);
    getline(cin, substr);
    if(str.find(substr)!=string::npos){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}