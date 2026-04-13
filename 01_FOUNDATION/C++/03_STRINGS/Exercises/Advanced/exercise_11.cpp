#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//Sắp xếp các từ trong chuỗi theo độ dài tăng dần, nếu bằng nhau thì sắp theo thứ tự từ điển
bool cmp( string a, string b ){
    return a.size()<b.size();
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> v;
    set<string> se;
    while (ss>>word ){
        v.push_back(word);
        se.insert(word);
    }

    sort(v.begin(),v.end(),cmp);
    for ( string x : v ){
        cout<<x<<' ';
    }

    cout<<endl;

    for ( string x:se ){
        cout<<x<<' ';
    }
}