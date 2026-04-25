#include <iostream>
#include <utility>
using namespace std;

void insertion_sort( int a[], int n){
    for ( int i=1;i<n;i++){
        int x=a[i];
        int pos=a[i-1];
        while ( pos>=0 && a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos]=x;
    }
    for ( int i=0;i<n;i++) cout<<a[i]<<' ';
}

int main(){
    int n; cin>>n;
    int a[n];
    for ( int i=0;i<n;i++) cin>>a[i];
    insertion_sort(a,n);
    return 0;
}