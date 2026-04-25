#include <iostream>
using namespace std;

//chữ số đứng giữa
int main(){
    string s; 
    cin>>s;
    if( s.size() %2==0 ) cout<<"NOT FOUND";
    else if ( s.size()%2!=0 ) cout<<s[s.size()/2];
    return 0;
}