#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n; cin>>n;
    vector<pair<int,int>> a;
    for (int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a.push_back({x,y});
    }
    for( int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<sqrt(a[i].first*a[i].first + a[i].second*a[i].second)<<endl;
    }
}