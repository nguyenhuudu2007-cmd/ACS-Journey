#include <iostream>
#include <array>
using namespace std;
int a[1001];
void Inputarray( int a[], int n ){
    for( int i=0;i<n;i++ ){
        cin>>a[i];
    }
}

int findMax( int a[], int n ){
    int max=a[0];
    int maxIndex=0;
    for( int i=1;i<n;i++ ){
        if( a[i]>max ){
            max=a[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}

int findMin( int a[], int n ){
    int min=a[0];
    int minIndex=0;
    for( int i=1;i<n;i++ ){
        if( a[i]<min ){
            min=a[i];
            minIndex=i;
        }
    }
    return minIndex;
}

int main(){
    int n; cin>>n;
    Inputarray( a, n );
    int max=findMax( a, n );
    int min=findMin( a, n );
    cout<<max<<" "<<min<<endl;
    return 0;
}