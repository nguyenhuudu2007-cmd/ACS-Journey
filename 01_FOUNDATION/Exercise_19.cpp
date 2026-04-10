#include <iostream>
using namespace std;
using ll = long long;
int a[1001];
void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int main(){
    int n; cin>>n;
    inputArray(n);
    for( int i=0;i<n;i++){
        if( (i>0 && a[i]*a[i-1]<0) || (i<n-1 && a[i]*a[i+1]<0) ){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
    