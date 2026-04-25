#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int cnt = 0;
    string ideal = "28TECH";
    stringstream ss(s);
    string word;

    while (ss >> word) {
        for (char &x : word) {
            x = toupper(x);
        }

        for (int i = 0; i < word.size(); i++) {
            if (ideal.find(word[i]) != string::npos) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
}
