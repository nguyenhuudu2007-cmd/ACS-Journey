#include <iostream>
#include <utility>
using namespace std;

// Counting Sort O(n+k) k là phần tử lớn nhất trong mảng
// Không có số âm, max không quá 1e7
void Counting_Sort ( int a[], int n){
    int max=a[0];
    for ( int i=1;i<n;i++){
        if( a[i]>max){
            max=a[i];
        }
    }

    int count[max+1]={0};
    for ( int i=0;i<n;i++){
        count[a[i]]++;
    }

    for ( int i=1;i<n;i++){
        count[i]+=count[i-1];
    }

    int output[n];
    for ( int i=n;i>=0;i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }

    for ( int i=0;i<n;i++) cout<<output[i]<<' ';
}

int main(){
    int n; cin>>n;
    int a[n];
    for ( int i=0;i<n;i++) cin>>a[i];
    Counting_Sort(a,n);
    return 0;
}