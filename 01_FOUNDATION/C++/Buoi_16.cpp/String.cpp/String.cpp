#include <bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;
    cin.ignore(1); //Bỏ qua ký tự newline còn lại sau khi đọc x, 1 là số ký tự cần bỏ qua, ở đây là 1 ký tự newline
    string s;
    getline(cin,s); //Đọc cả dòng, bao gồm cả khoảng trắng
    cout<<s<<endl;
    cout<<s.size()<<endl; //Hoặc s.length() đều được
    cout<<s.length()<<endl;
}