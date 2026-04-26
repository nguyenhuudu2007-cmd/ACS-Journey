#include<iostream>
using namespace std;

//Xâu nhị phân k bit 1
int n,a[1000],ok,k;

void generate(){
    for ( int i=0;i<n;++i) a[i]=0;
}

void sinh(){
    int i=n;
    while (i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if( i==0 ) ok=0;
    else a[i]=1;
}

bool check1(){
    int cnt=0;
    for ( int i=1;i<=n;i++){
        cnt+=a[i];
    }
    return cnt==k;
}

bool check2(){
    int cnt=0;
    int dem=0;
    for ( int i=1;i<=n;i++){
        if(a[i]==1){
            ++dem;
        }else{
            if(dem>k) return false;
            if( dem==k )++cnt;
            dem=0;
        }
    }
    if(dem>k) return false;
    if( dem==k ) ++cnt;
    return cnt==1;
}

int main(){
    cin>>n;
    generate();
    ok=1;
    while (ok){
        if(check1())
        for ( int i=1;i<=n;i++){
            if( a[i]==1){
                cout<<'A';
            }
            else cout<<'B';
        }
        cout<<endl;
        sinh();
    }

    cout<<endl;
    generate();
    ok=1;
    while(ok){
        if(check2()){
            for ( int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<' ';
        }
        sinh();
    }
    cout<<endl;
}