#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
 int a[100001];
 int main(){
    int n; cin>>n;
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
    int minValue = a[0];
    int count[10001]={0};
        for( int i=1;i<n;i++){
        if (a[i]<minValue){
            minValue=a[i];
        }
    }
    for( int i=0;i<n;i++){
        if (a[i]==minValue){
            count[minValue]++;
        }
    }
    cout<<count[minValue]<<endl;
        return 0;
    }