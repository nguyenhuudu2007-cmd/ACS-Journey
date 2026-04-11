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
    //concate
    string s="abcd";
    string t="abcde";
    cout<<s.compare(t)<<endl;
    string st=s+t;
    string ts=t+s;
    cout<<st<<' '<<ts<<endl;
    string a="1234";
    //stoi: string to integer //stoll: string to long long
    int r=stoi(a);
    cout<<r<<endl;
    int n=12345
    string f=to_string(n);
    cout<<f<<endl;

    string d; cin>>d;
    stringstream ss(d);
    string word;
    while (ss>>word){
        cout<<word<<endl;
    }
    while ( getline(ss,word,'/')){
         
    }
}