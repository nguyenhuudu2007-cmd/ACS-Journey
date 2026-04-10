#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
//sắp xếp theo trị tuyệt đối tăng dần
//nếu 2 số cùng giá trị thì số nào xuất hiện trước thì in ra trước

bool cmp( pair<int,int>a, pair<int, int>b){
    if(abs(a.first)!=abs(b.first)) return abs(a.first) < abs(b.first);
    else return a.second < b.second;
}
int main(){
    int n; cin>>n;
    vector<pair<int, int>> a(n);
    for ( int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(begin(a), end(a),cmp);
    for( int i=0;i<n;i++){
        cout<<a[i].first<<' ';
    }
}