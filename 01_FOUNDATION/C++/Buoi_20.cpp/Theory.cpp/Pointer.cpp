#include <iostream>
using namespace std;

void tang( int *n){
    (*n)++;
}
int main(){
    int a=100;
    int *ptr=&a;
    cout<<ptr<<endl; //a gán địa chỉ vào ptr
    cout<<&a<<endl; //địa chỉ của a
    cout<<*ptr<<endl; //*ptr mang giá trị của a
    *ptr=50;
    cout<<a<<endl; // a có giá trị theo *ptr
    int n=200;
    tang(&n);
    cout<<n<<endl;
}