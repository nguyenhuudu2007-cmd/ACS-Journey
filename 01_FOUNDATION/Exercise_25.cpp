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
    int countOdd=0;
    int countEven=0;
    inputArray(n);
    for( int i=0;i<n;i++){
        if( a[i]%2==0) countEven++;
        else countOdd++;
    }
    if( countEven>countOdd){
        cout<<"Even";
    } else if ( countOdd>countEven){
        cout<<"Odd";
    } else {
        cout<<"Equal";
    }
}