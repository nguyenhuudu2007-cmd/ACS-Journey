#include <bits/stdc++.h>
using namespace std;

//đếm tần suất của ký tự trong chuỗi;

bool compare(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second; // Sắp xếp theo giá trị int giảm dần
}
int main(){
    string s; 
    getline(cin,s);
    map<char,int> freq;
    for ( auto it : s ){
        freq[it]++;
    }

    for ( auto it:freq ){
        cout<<it.first<<' '<<it.second<<endl;
    }

    cout<<endl;

    for (char x : s) {
        if (freq[x] != 0) {
            cout << x << " " << freq[x] << endl;
            freq[x] = 0; // Đánh dấu ký tự này đã in xong
        }
    }

    return 0;
}