#include <iostream>
using namespace std;

//tìm kiếm tuyến tính
bool search ( int arr[], int n, int x){
    for ( int i=0;i<n;i++){
        if ( arr[i]==x) return true;
    }
    return false;
}

//tìm kiếm nhị phân : O(logN)
//Điều kiện: mảng sắp theo tăng/giảm dần
bool search2( int arr[], int n, int x){
    int left=0; int right=n-1;
    while (left<=right){
        int mid=(left+right)/2;
        if( arr[mid]==x){
            return true;
        }else if( arr[mid]>x){
            right=mid-1; //tìm ở bên trái
        }
        else{
            left=mid+1; //tìm ở bên phải
        }
    }
    return false;
}

//binary_seach(a, a+n;x)
//binary_search(a.begin(), a.end(),x)
//binary_search(a.begin()+u, a.end()+v+1,x)
//binary_search( a+u, a+v+1, x): a[u,v]

//Tìm vị trí đầu tiên của x trong mảng
int FirstPos( int a[], int n, int x){
    int res=-1;
    int left=0; int right=n-1;
    while (left<=right){
        int mid=(left+right)/2;
        if (a[mid]==x){
            res=mid;
            right=mid-1;
        }
        else if( a[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return res;
}

//Tìm vị trí cuối cùng của x trong mảng
int FinalPos ( int a[], int n, int x){
    int left=0; int right=n-1;
    int res=-1;
    while ( left<=right){
        int mid=(left+ right)/2;
        if( a[mid]==x){
            res=mid;
            left=mid+1;
        }
        else if( a[mid]<x){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return res;
}

//Tìm vị trí đầu tiên của phần tử >=x
int lower( int a[], int n, int x){ //lower_bound()
    int left=0; int right=n-1;
    int res=-1;
    while ( left<=right){
        int mid=(left+right)/2;
        if(a[mid]>=x){
            res=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return res;
}

//Tìm vị trí đầu tiên của phần tử > x trong mảng tăng dần
int higher( int a[], int n, int x){ //upper_bound()
    int res=-1; int left=0; int right=n-1;
    while ( left <=right){
        int mid=(left+right)/2;
        if ( a[mid]>x){
            res=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return res;
}
int main(){
    int n,x; cin>>n>>x;
    int a[100001];
    for ( int i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<higher(a,n,x);
}