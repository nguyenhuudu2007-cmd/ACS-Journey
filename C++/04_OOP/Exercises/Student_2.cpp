#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

struct SV {
    string name;
    string date;
    string address;
    double gpa;
};

void input ( SV &s ){
    getline ( cin, s.name );
    getline ( cin, s.date );
    getline ( cin, s.address );
    cin>>s.gpa;
}

void output ( SV &s ){
    cout<<s.name<<' '<<s.date<<' '<<s.address<<' '<<s.gpa<<endl;
}

bool cmp ( SV a, SV b ){
    return a.gpa>b.gpa;
}

int main(){
    int n; cin>>n;
    vector<SV> a;
    for ( int i=0;i<n;i++){
        cin.ignore();
        SV tmp;
        input(tmp);
        a.push_back(tmp);
    }

    stable_sort( a.begin(), a.end(), cmp );
    for ( SV x : a){
        output(x);
    }
    return 0;
}