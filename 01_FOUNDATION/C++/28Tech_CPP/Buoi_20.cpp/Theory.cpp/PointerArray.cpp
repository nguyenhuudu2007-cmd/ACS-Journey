#include <iostream>
#include <array>
using namespace std;
int a[1001];

int main() {
    int n;
    cin >> n;
    
    for ( int i=0;i<n;i++){
        //cin>>a[i];
        cin>>*(a+i);
    }

    for ( int i=0;i<n;i++){
        //cout<<a[i];
        cout<<*(a+i);
    }
    cout<<endl;

    int *b=&a[0];
    for ( int i=0;i<n;i++){
        //cout<<b[i];
        cout<<*(b+i);
    }
    
    return 0;
}