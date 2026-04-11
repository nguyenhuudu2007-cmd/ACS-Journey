#include <bits/stdc++.h>
using namespace std;

//Bài 16: Sắp xếp công việc
bool cmp ( pair<int,int>a, pair<int,int>b ){
    return a.second<b.second;
}

int main(){
    int n; cin>>n;
    vector<pair<int,int>>a(n);
    for ( int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    int cnt=0;
    int end_time=a[0].second;
    for ( int i=0;i<n;i++){
        if( a[i].first>=end_time){
            cnt++;
            end_time=a[i].second;
        }        
    }
    cout<<cnt;
    return 0;
}