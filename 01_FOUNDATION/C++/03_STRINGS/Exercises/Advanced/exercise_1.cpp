#include <bits/stdc++.h>
using namespace std;

//Đếm số loại ký tự trong xâu;
bool isDigit (char c ){
    return c>='0' && c<='9';
}

bool isAlpha (char c ){
    return (c>='a' && c<='z') || (c>='A' &&c<='Z');
}

bool isSpec (char c){
    return !(isDigit(c) || isAlpha(c) || c==' ');
}

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int numsCount=0;
    int alphaCount=0;
    int specCount=0;
    while ( ss >>word ){
        for ( int i=0;i<word.size();i++){
            if( isDigit(word[i])) numsCount++;
            else if ( isAlpha(word[i])) alphaCount++;
            else if (isSpec(word[i])) specCount++;
        }
    }
    cout<<numsCount<<' '<<alphaCount<<' '<<specCount<<endl;
}

