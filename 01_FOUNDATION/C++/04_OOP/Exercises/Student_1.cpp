#include <iostream>
using namespace std;

struct student {
    string name;
    string Date_of_Birth;
    double gpa;
};

void input ( student &s ){
    getline ( cin,s.name );
    getline ( cin, s.Date_of_Birth );
    cin>>s.gpa;
}

void output ( student &s ){
    cout<<s.name<<' '<<s.Date_of_Birth<<' '<<s.gpa<<endl;
}
bool cmp ( student a, student b ){
    return a.gpa>b.gpa;
}
int main(){
    int n; cin>>n;
    student a[n];
    for ( int i=0;i<n;i++){
        cin.ignore();
        input[a[i]];
    }
    sort ( a, a+n, cmp );

    for ( int i=0;i<n;i++){
        output[a[i]];
    }


}