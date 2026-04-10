#include <bits/stdc++.h>
using namespace std;

bool cmp ( pair<int,int>a, pair<int,int>b){
    int da=abs(a.first-a.second);
    int db=abs(b.first-b.second);
    if( da!=db){
        return da<db;
    }
    return a.first<b.first;
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>>v(n);
    for ( int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for ( auto a:v){
        cout<<a.first<<' '<<a.second<<' ';
    }
}