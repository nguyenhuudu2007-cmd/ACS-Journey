#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    string target = "python";
    int j = 0;

    for (char c : S) {
        if (tolower(c) == target[j]) {
            j++;
            if (j == (int)target.size()) break;
        }
    }

    if (j == (int)target.size()) cout << "YES";
    else cout << "NO";

    return 0;
}
