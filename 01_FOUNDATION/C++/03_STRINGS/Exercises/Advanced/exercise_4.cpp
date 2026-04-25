#include <bits/stdc++.h>
using namespace std;

//tìm kí tự có tần suất coa nhất và thấp nhất
int main(){
    string s;
    getline(cin,s);
    map<char,int> freq;
    for ( char x:s ){
        freq[x]++;
    }
    int maxVal=-1;
    int minVal=1e9;
    char res_max,res_min;
    for ( auto it:freq ){
        if( it.second>=maxVal ){
            maxVal=it.second;
            res_max=it.first;
        }

        if( it.second<=minVal){
            minVal=it.second;
            res_min=it.first;
        }
    }
    cout<<res_max<<' '<<maxVal<<endl;
    cout<<res_min<<' '<<minVal<<endl;
    return 0;
}