#include <iostream>
using namespace std;
using ll = long long;

ll powMode( ll a, ll b ){
    ll res=1;
    while (b){
        if (b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

int main(){
    /*unsigned int a=23;
    unsigned int b=9;
    unsigned c=a|b; //toán tử OR
    unsigned d=a&b; //toán tử AND
    unsigned e=a^b; //toán tử XOR
    unsigned f=~a; //toán tử NOT
    unsigned g=a<<2; //toán tử dịch trái, nhân a với 2^2
    unsigned h=a>>2; //toán tử dịch phải, chia cho a với 2^2*/
    int n; cin>>n;
    int a[n];
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for ( int i=0;i<n;i++){
        ans^=a[i];
    }
    cout<<ans<<endl;
}