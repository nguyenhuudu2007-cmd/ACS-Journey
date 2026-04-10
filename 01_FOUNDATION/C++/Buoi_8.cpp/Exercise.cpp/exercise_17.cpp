#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;
int main(){
    map<char,int>mp;
    set<char>se;
    string s; cin>>s;
    for ( size_t i=0;i<s.length();i++){
        se.insert(s[i]);
        mp[s[i]]++;
    }
    int max_count=0;
    char max_char;
    for ( auto x:mp){
        if ( x.second>max_count){
            max_count=x.second;
            max_char=x.first;
        }
    }
    int min_count=1e9;
    char min_char;
    for ( auto x:mp){
        if ( x.second<min_count){
            min_count=x.second;
            min_char=x.first;
        }
    }
    cout<<min_char<<" "<<min_count<<endl;
    cout<<max_char<<" "<<max_count<<endl;
    cout<<se.size()<<endl;
    return 0;
}