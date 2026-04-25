#include <bits/stdc++.h>
using namespace std;

//chèn dấu phẩy vào số nguyên lớn
int main(){
    string s; cin>>s;
    int count=0;
    for ( int i=0;i<s.size();i++){
        cout<<s[i];
        count++;
        if (count%3==0 && i!=s.size()-1){ //chèn dấu phẩy sau mỗi 3 chữ số, trừ khi đó là số cuối cùng
            cout<<',';
        }
    }
    cout<<endl;
}