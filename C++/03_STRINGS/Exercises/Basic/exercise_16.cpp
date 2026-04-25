#include <bits/stdc++.h>
using namespace std;

//Sắp xếp theo thứ tự tăng và giảm dần của chuỗi
int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    cout << s << endl;

    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
