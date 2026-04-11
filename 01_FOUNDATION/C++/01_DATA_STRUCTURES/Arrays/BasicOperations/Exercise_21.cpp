#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];

int main(){
    int n; cin>>n;
    ll count[1001]={0};
    for( int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
    }
    for( int i=0;i<n;i++){
        for ( int j=0;j<n-i-1;j++){
            if( a[j]>a[j+1]){
                ll tmpt=a[j];
                a[j]=a[j+1];
                a[j+1]=tmpt;
            }
        }
    }

    for( int i=0;i<n;i++){
        if( count[a[i]]>0){
            cout<<a[i]<<" "<<count[a[i]]<<endl;
            count[a[i]]=0;
        }
    }
}
