#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];
void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main(){
    int n; cin>>n;
    inputArray(n);
    for ( int i=1;i<n+1;i++){
        a[i]+=a[i-1];
    }
    for ( int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}