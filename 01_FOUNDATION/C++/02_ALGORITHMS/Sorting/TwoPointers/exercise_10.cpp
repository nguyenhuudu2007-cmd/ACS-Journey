#include <bits/stdc++.h>
using namespace std;

int f( int arr[], int l, int r, int x){
    int res=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (arr[mid]>x) 
        {
            res=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return res;
}
int main(){
    int n; cin>>n;
    int a[n]; int b[n];
    for ( int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort( a,a+n);
    for ( int i=0;i<n;i++){
        //tìm phần tử nhỏ nhất lớn hơn b[i]
        int pos= f( a, 0, n-1, b[i]);
        if (pos==-1) cout<<"_";
        else cout<<a[pos]<<' ';
    }
}