#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

//in lật ngược, in hoa, in thường
int main(){
    string s; cin>>s;
    vector<string> v;
    //lật ngược chuỗi
    for ( int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;

    //Viết hoa chuỗi
    for ( int i=0;i<s.size();i++){
        cout<<(char)(toupper(s[i]));
    }
    cout<<endl;

    //Viết thường chuỗi
    for ( int i=0;i<s.size();i++){
        cout<<(char)(tolower(s[i]));
    }
    cout<<endl;
}