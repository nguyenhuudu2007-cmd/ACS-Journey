#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin>>n;
    vector<char> chars;
    for ( int i=0;i<n;i++){
        char c; cin>>c;
        chars.push_back(c);
    }
    vector <pair<char,int>> freq;
    for( int i=0;i<n;i++){
        char c=chars[i];
        bool found=false;
        for( auto &p:freq){
            if( p.first==c){
                p.second++;
                found=true;
                break;
            }
        }
        if( !found){
            freq.push_back({c,1});
        }
    }
    for( auto &p:freq){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}