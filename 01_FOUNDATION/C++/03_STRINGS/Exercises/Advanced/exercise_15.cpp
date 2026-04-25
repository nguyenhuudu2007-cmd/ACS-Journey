#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string t;
    getline(cin, t);

    size_t pos = s.find(t);
    if (pos != string::npos) {
        cout << "Tim thay \"" << t << "\" tai vi tri " << pos << endl;
    } else {
        cout << "Khong tim thay \"" << t << "\" trong chuoi." << endl;
    }

    return 0;
}
