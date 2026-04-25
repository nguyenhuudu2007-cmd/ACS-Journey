#include <iostream>
using namespace std;

long long gcd ( long long a, long long b){
    while (b){
        long long t=a%b;
        a=b;
        b=t;
    }
    return a;
}

struct PhanSo{
    long long ms, ts;
};

void input ( PhanSo &p ){
    cin>>p.ts>>p.ms;
}

void output ( PhanSo &p ){
    cout<<p.ts<<'/'<<p.ms;
}

void simplify ( PhanSo &p ){
    long long k=gcd(p.ts, p.ms);
    p.ts/=k;
    p.ms/=k;
}

int main(){
    struct PhanSo p;
    input(p);
    simplify(p);
    output(p);
    return 0;
}