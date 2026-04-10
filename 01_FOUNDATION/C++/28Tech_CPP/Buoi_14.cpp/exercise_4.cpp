#include <bits/stdc++.h>
using namespace std;

map<int,int>mp;
//Sắp xếp theo tần suất
bool cmp1( int a, int b){
    if( mp[a]!=mp[b]) return mp[a]>mp[b];
    return a<b;
}

bool cmp2( pair<int,int>a, pair<int,int>b){
    return a.second>b.second;
}

int main(){
    int n; cin>>n;
    vector <int>a(n),b(n);
    for ( int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        mp[a[i]]++;
    }
    sort( a.begin(), a.end(), cmp1);
    for ( auto it:a){
        cout<<it<<' ';
    }
    cout<<endl;
    vector<pair<int,int>>b;
    for ( int i=0;i<n;i++){
        if( mp[b[i]]!=0){
            b.push_back({a[i], mp[a[i]]});
            mp[b[i]]=0;
        }
    }
    stable_sort( b.begin(), b.end(), cmp2);
    for ( auto it:b){
        for ( int i=0;i<it.second;i++){
            cout<<it.first<<' ';
        }
    }
}