#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[1001];
bool fibo( int n){
    if( n==0 || n==1 ) return true;
    int f1=0, f2=1, f3=f1+f2;
    while( f3<=n ){
        if( f3==n ) return true;
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    return false;
}

int main(){
    int n;cin>>n;
    bool found=false;

    for( int i=0;i<n;i++ ){
        cin>>a[i];
    }

    for( int i=0;i<n;i++ ){
        if( fibo(a[i]) ){
            cout<<a[i]<<" ";
            found=true;
        }
    }
    
    if (!found){
        cout<<"NONE"<<endl;
    }
    return 0;
}