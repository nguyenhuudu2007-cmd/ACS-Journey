#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int>freq;
    for ( int i=0;i<n;i++){
        set<int>row_values;
        for ( int j=0;j<n;j++){
            int x; cin>>x;
            row_values.insert(x);
        }
        for( int val:row_values){
            freq[val]++;
        }
    }
    vector <int> result;
    for( auto &p: freq){
        if( p.second==n){
            result.push_back(p.first);
        }
    }
    if(result.empty()){
        cout<<"NOT FOUND"<<endl;
    }else{
        for( size_t i=0; i<result.size();i++){
            cout<<result[i];
        }
    }
    return 0;
}