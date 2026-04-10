#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a; //khai báo vector rỗng
    for( int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x); //thêm phần tử x vào cuối vector
    }
    a.pop_back(); //xóa phần tử cuối cùng của vector
    for( auto x:a){
        cout<<x<<" "; //truy cập phần tử theo kiểu for-each
    }
    return 0;
}