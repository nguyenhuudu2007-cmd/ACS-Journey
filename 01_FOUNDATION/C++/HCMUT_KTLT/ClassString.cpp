#include <iostream>
#include <cstring>
using namespace std;

void cutString(string s, int index) {
    if (index >= 0 && index < (int)s.size()) {
        cout << s.substr(index) << endl;
    }
}

void findAllIndex(string s1, string s2){
    if( s2.empty()){
        cout<<-1;
        return;
    }

    char c=s2[0];
    bool found=false;
    for ( int i=0;i<s1.size();i++){
        if (s1[i]==c){
            if( found ) cout<<" ";
            cout<<i;
            found=true;
        }
    }
    if(!found) cout<<-1;
}

void replaceString(string s, string s1, string s2){
    size_t pos = s.rfind(s1); // tìm vị trí cuối cùng
    if (pos != string::npos) {
        s.replace(pos, s1.size(), s2);
    }
    cout << s << endl;
}

void deleteWord(string s, string s1) {
    size_t pos;
    while ((pos = s.find(s1)) != string::npos) {
        s.erase(pos, s1.size());
    }
    cout << s << endl;
}

string longestPalindrome(string s) {
    int n = s.size();
    int start = 0, maxLen = 1;
    for (int i = 0; i < n; i++) {
        // mở rộng quanh tâm (odd length)
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
        // mở rộng quanh tâm (even length)
        l = i; r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }
    return s.substr(start, maxLen);
}