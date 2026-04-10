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
    int sum=0;
    for( int i=0;i<n;i++){
        sum+=a[i];
    }
    double average = static_cast<double>(sum) / n;
    cout.precision(3);
    cout<<average<<endl;
}