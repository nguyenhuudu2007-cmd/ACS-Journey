#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string upperA = a, upperB = b;
    string lowerA = a, lowerB = b;

    for (char &c : upperA) c = toupper(c);
    for (char &c : upperB) c = toupper(c);

    for (char &c : lowerA) c = tolower(c);
    for (char &c : lowerB) c = tolower(c);

    cout << upperA << " " << upperB << endl;
    cout << lowerA << " " << lowerB << endl;
}
