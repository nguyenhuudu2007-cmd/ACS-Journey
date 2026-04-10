#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int,pair<int,int>>> a;
    for ( int i=0;i<n;i++){
        int x,y,z; cin>>x>>y>>z;
        a.push_back({x,{y,z}});
    }
    for( int i=0;i<n;i++){
        int sum=a[i].first+a[i].second.first+a[i].second.second;
        cout<<sum<<endl;
    }
}