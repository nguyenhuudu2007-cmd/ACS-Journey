#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isAlphabetic( char c ){
    return (c>='a' && c<='z' || c>='A' && c<='Z');
}

int main() {
    string s;
    getline(cin, s);

    for (char &x : s) {
        if (!isAlphabetic(x)) {
            x = ' ';
        }
    }

    stringstream ss(s);
    string word;
    bool first = true;

    while (ss >> word) {
        if (!first) cout << " "; //in ra khoảng trẳng giữa các từ, trừ khi đó là từ đầu tiên
        cout << word;
        first = false; 
    }

    return 0;
}
