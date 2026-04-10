#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a; //khai báo vector rỗng
    vector<int> b(n,100); //khai báo vector có n phần tử, mỗi phần tử có giá trị là 100
    a.push_back(10); //thêm phần tử 10 vào cuối vector
    a.push_back(20);    
    a.push_back(30);

    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" "; //truy cập phần tử theo chỉ số
    }
    cout<<endl; 

    for ( auto x:a){
        cout<<x<<" "; //truy cập phần tử theo kiểu for-each
    }
    cout<<endl;

    for( auto it=a.begin(); it!=a.end(); it++){
        cout<<*it<<" "; //truy cập phần tử theo iterator
    }
    cout<<*(a.begin()+2);
    for( int i=0;i<n;i++){
        cin>>b[i];
    }
    return 0;
}