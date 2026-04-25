#include <iostream>
#include <utility>
using namespace std;

//Intercharge Sort
void intercharge_sort( int a[], int n){
    for ( int i=0;i<n-1;i++){
        for ( int j=i+1;j<n;j++){
            if( a[j]<a[i]){
                swap(a[j],a[i]);
            }
        }
    }
    for ( int i=0;i<n;i++) cout<<a[i]<<' ';
}

int main(){
    int n; cin>>n;
    int a[n];
    for ( int i=0;i<n;i++) cin>>a[i];

    intercharge_sort(a,n);
    return 0;
}