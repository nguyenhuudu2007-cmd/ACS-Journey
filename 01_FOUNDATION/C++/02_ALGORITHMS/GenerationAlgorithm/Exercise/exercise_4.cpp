#include<iostream>
using namespace std;

//Xâu nhị phân k bit 1
int n,a[1000],ok,k;

void generate(){
    for ( int i=0;i<n;++i) a[i]=0;
}

void sinh(){
    int i=n;
    while (i>=1 && a[i]==n-k+i){
        --i;
    }
    if( i==0 ) ok=0;
    else {
        a[i]++;
        for ( int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
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
        sinh();
    }
}