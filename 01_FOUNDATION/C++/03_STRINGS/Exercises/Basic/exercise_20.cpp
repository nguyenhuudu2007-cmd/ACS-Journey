#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &w) {
    int l = 0, r = (int)w.size() - 1;
    while (l < r) {
        if (w[l] != w[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool first = true;

    while (ss >> word) {
        if (isPalindrome(word)) {
            if (!first) cout << ' ';
            cout << word;
            first = false;
        }
    }
    return 0;
}
