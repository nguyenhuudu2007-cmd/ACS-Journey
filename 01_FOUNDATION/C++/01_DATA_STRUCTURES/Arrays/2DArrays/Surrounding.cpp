#include <bits/stdc++.h>
using namespace std;

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

int main(){
    int i=3; int j=4;
    for ( int k=0;k<4;k++){
        int i1= i+dx[k];
        int j1=j+dy[k];
        cout<<i1<<' '<<j1<<endl;    
    }
    
}
