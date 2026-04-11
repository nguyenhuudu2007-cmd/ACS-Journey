#include <iostream>
#include <vector>   
#include <array>
#include <algorithm>
#include <numeric>  // For std::accumulate
using namespace std;
int a[100001];
int main(){
    int n;cin>>n;
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    int totaleven=0; int counteven=0;
    int totalodd=0; int countodd=0;
    for( int i=0;i<n;i++){
        if (a[i]%2==0){
            totaleven+=a[i];
            counteven++;
        }
        else{
            totalodd+=a[i];
            countodd++;
        }
    }
    cout<<counteven<<endl;
    cout<<countodd<<endl;
    cout<<totaleven<<endl;
    cout<<totalodd<<endl;
}