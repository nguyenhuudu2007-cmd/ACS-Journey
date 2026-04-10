#include <bits/stdc++.h>
using namespace std;

int firstSort( int arr[], int n, int x){
    for ( int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0; int right=n-1;
    int res=-1;
    while (left<=right){
        int mid=(left+right)/2;
        if( arr[mid]==x){
            res=mid;
            right=mid-1;
        }
        else if( arr[mid]>x){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return res;
}

int secondSort( int arr[], int n, int x){
    int left=0; int right=n-1;
    int res=-1;
    while ( left<=right){
        int mid=(left+ right)/2;
        if( arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return res;
}

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

int lastPos ( int arr[], int n, int x){
    int left=0;
    int right=n-1;
    int res=-1;
    while (left<=right){
        int mid=(left+right)/2;
        if (arr[mid]==x){
            res=mid;
            left=mid+1;
        }
        else if( arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return res;
}

int freq( int arr[], int n, int x){
    int first=firstPos(arr, n, x);
    int last=lastPos(arr, n, x);
    return last-first+1;
}

int main(){
    int n,x; cin>>n>>x;
    int arr[n];
    cout<<firstSort(arr, n, x);
    cout<<secondSort(arr, n, x);
    cout<<FirstPos(arr, n, x);
    cout<<lastPos(arr, n, x);
    cout<<freq(arr, n, x);
}