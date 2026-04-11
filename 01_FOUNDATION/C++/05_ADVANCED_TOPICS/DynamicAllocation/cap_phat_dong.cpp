#include <iostream>
using namespace std;
int main(){
    int *a=new int[100]; //cấp phát động: heap
    //int a[100]; //cấp phát tĩnh: stack
    int n; cin>>n;
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    for ( int i=0;i<n;i++){
        cout<<a[i];
    }
}

// Cú pháp delete []a để giải phóng bộ nhớ đã cấp phát động cho mảng a