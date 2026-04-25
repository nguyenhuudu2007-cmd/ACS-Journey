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

PhanSo sum ( PhanSo a, PhanSo b ){
    PhanSo res;
    res.ms=(long long)a.ms*b.ms;
    res.ts=(long long)a.ts*b.ms+(long long)a.ms*b.ts;
    simplify(res);
    return res;
}

int main(){
    struct PhanSo p,q;
    input(p); input(q);
    PhanSo t=sum(p,q);
    output(t);
    return 0;
}
    