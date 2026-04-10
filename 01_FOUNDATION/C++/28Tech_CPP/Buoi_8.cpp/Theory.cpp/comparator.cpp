#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;
#define ll long long
bool cmp ( int a, int b){
    return a<b;
}
int main(){
    int n; cin>>n;
    int a[10001];
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, cmp);
    for( int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}