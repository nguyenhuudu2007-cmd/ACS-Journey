#include <iostream>
#include <string>
using namespace std;

//Loại bỏ các ký tự trong chuỗi "28tech"
int main() {
    string s;
    getline(cin, s);

    string bad = "28tech";
    string res = "";

    for (char x : s) {
        if (bad.find(x) == string::npos) {
            res += x;
        }
    }

    if (res.empty()) cout << "EMPTY";
    else cout << res;

    return 0;
}
