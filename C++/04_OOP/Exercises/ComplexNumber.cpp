#include <iostream>
using namespace std;

struct complex{
    int vir, real;
    complex operator + (const complex& other){
        complex res;
        res.real = real + other.real;
        res.vir = vir + other.vir;
        return res;
    }

    friend istream& operator >>(istream & in, complex& x){ //input
        in >> x.real >> x.vir;
        return in;
    }

    friend ostream& operator<< (ostream& out, const complex& x){
        out << x.real;
        if (x.vir >= 0) {
            out << "+";
        }
        out << x.vir << "i";
        return out;
    }
};

void input ( complex &a, complex &b ){
    cin >> a >> b;
}

void output ( complex a ){
    cout << a;
}

int main(){
    complex a, b;
    input(a, b);
    complex c = a + b;
    output(c);
    return 0;
}
