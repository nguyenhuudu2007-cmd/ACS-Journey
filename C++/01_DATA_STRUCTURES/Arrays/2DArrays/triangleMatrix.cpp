#include <bits/stdc++.h>
using namespace std;

bool thuanNghich( int n ){
    int rev=0, temp=n;
    while (temp){
        rev=rev*10+temp%10;
        temp/10;
    }
    return rev==n;
}

int a[100][100];
int main(){
    int n; cin>>n;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            cin>>a[i][j];
        } 
    }

    int count=0;
    for ( int i=0;i<n;i++){
        for ( int j=0;j<n;j++){
            if( thuanNghich(a[i][j])) count++;
        }
    }
    cout<<count<<endl;
}