#include<bits/stdc++.h>
using namespace std;

//ifstream: đọc file
//ofstream: ghi file, tạo mới file
//fstream: đọc và ghi file
//ios::in: đọc file 
//ios::out: ghi file
//ios::binary: mở kiểu nhị phân
//ios::app: mở file lên để ghi nhưng ghi vào cuối file
//ios::ate: đjăt vị trí con trỏ của file vào cuối file, nếu mà mode không được bật thì vị trí con trở sẽ là đầu file
//ios::trunc: mở file để đọc, những nội dung trước đó trong file sẽ bị mất hết 
int main(){
    ifstream in;
    ofstream out;
    out.open("outpupt.txt",ios::out);
    /*if(out.is_open()){
        cout<<"Opened"<<endl;
    }else{
        cout<<"Not opened"<<endl
    }*/

    int n; in >>n;
    int a[n];
    for ( int i=0;i<n;i++){
        in>>a[i];
    }

    for ( int i=0;i<n;i++){
        out<<a[i]<<' ';
    }
    out.close();
    in.close();
}