#include <iostream>
using namespace std;

struct SV{
    string name, date, address;
    double gpa;
    SV(){
        name="Nguyen Van A";
        date="01/01/2026";
        address="Ha Noi";
        gpa=3.9;
    } 

    SV(string name, string date, string address, double gpa ){
        this->name=name; //this->name is the name of the current object, name is the parameter of the constructor
        this->date=date; //this->date is the date of current object, date is the parameter of the constructor
        this->address=address;
        this->gpa=gpa;
    }
};

void input ( SV &s ){
    getline ( cin, s.name );
    getline ( cin, s.date );
    getline ( cin, s.address );
    cin>>s.gpa;
}

void output ( const SV &s ){
    cout<<s.name<<endl;
    cout<<s.date<<endl;
    cout<<s.address<<endl;
    cout<<s.gpa<<endl;
}

int main(){
    SV s;
    output(s);
    SV t("Nguyen Van B","02/02/2026","HCM",3.8);
    output(t);
}