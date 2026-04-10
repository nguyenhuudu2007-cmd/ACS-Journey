#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];
ll mark[1001] = {0}; // 0: chưa xuất hiện, 1: đã xuất hiện
void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]]++;
    }
}

int main(){
    int n; cin>>n;
    inputArray(n);
    for ( int i=0;i<n;i++){
        if( mark[a[i]]>0){
            cout<<a[i]<<" "<<mark[a[i]]<<endl;
            mark[a[i]]=0;
        }
    }
}
