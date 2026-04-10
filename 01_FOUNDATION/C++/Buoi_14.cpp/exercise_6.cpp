#include <bits/stdc++.h>
using namespace std;

//Bài 24: Airport Check-in
int main(){
    int n; cin>>n;
    vector<pair<int,int>>a(n);
    for ( int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(), a.end());
    int endtime=a[0].first+a[0].second;
    for ( int i=0;i<n;i++){
        int check_in_time=max(end_time, a[i].first);
        end_time=check_in_time+a[i].second;
    }
    cout<<end_time;
}