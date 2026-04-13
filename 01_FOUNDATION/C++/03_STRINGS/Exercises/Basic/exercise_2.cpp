#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (char &c : a) c = toupper(static_cast<unsigned char>(c));
    for (char &c : b) c = toupper(static_cast<unsigned char>(c));
    cout << a << ' ' << b << '\n';

    for (char &c : a) c = tolower(static_cast<unsigned char>(c));
    for (char &c : b) c = tolower(static_cast<unsigned char>(c));
    cout << a << ' ' << b << '\n';

    return 0;
}
