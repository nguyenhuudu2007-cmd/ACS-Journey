#include <iostream>
using namespace std;

struct SV{
string name, date, address;
double *gpa;
};

struct Lop{
    int n;
    SV *ds;
};

int main(){
    SV s;
    getline( cin,s.name );
    getline(cin, s.date);
    getline(cin, s.address );
    s.gpa= new double [10];
    for ( int i=0;i<10;i++){
        cin>>s.gpa[i];
    }
}