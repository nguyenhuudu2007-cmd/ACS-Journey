#include <bits/stdc++.h>
using namespace std;

//Kí tự xuất hiện ở chuỗi 1 mà không có ở chuỗi 2 và ngược lại
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    set<char> charsInS;
    set<char> charsInT;

    for (char x : s){
        charsInS.insert(x);
    }
    for (char x : t){
        charsInT.insert(x);
    }
    for (char x : charsInS){
        if (charsInT.find(x) == charsInT.end()){
            cout << x;
        }
    }
    for (char x : charsInT){
        if (charsInS.find(x) == charsInS.end()){
            cout << x;
        }
    }
}


