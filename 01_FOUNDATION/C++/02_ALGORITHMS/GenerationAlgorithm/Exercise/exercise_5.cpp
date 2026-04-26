#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

//sinh hoán vị

int n,a[100],k,ok;
void generate(){
    for ( int i=1;i<=n;i++) a[i]=i;
}

void sinh(){
    int i=n-1;  
    while ( i>=1 && a[i]>a[i+1]){
        --i;
    }
    if( i==0 ){
        ok=0;
    }else{
        int j=n;
        while (a[i]>a[j]) --j;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

int main(){
    cin>>n>>k;
    generate();
    ok=1;
    while(ok){
        for ( int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<endl;
        sinh();
    }
}
