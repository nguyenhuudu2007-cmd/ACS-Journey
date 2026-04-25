#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    map<char, bool> m1, m2, total;
    for (char x : s1) {
        m1[x] = true;
        total[x] = true;
    }
    for (char x : s2) {
        m2[x] = true;
        total[x] = true; 
    }

    // Dòng 1: Xuất hiện ở cả 2 xâu (Giao)
    // Duyệt qua m1, nếu ký tự đó cũng có trong m2 thì in ra
    for (auto it : m1) {
        if (m2[it.first]) {
            cout << it.first;
        }
    }
    cout << endl;

    // Dòng 2: Xuất hiện ở 1 trong 2 xâu (Hợp)
    // Duyệt qua map total (map này đã tự sắp xếp key)
    for (auto it : total) {
        cout << it.first;
    }
    cout << endl;

    return 0;
}
