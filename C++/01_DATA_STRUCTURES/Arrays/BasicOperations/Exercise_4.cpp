#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int a[100001];
int main(){
    int n; cin>>n;
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
    int x; cin>>x;
    int count_greater=0;
    int count_less=0;
    for( int i=0;i<n;i++){
        if (a[i]>x){
            count_greater++;
        }
        else{
            count_less++;
        }
    } 
    cout<<count_greater<<endl;
    cout<<count_less<<endl;  
}