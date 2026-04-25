#include <bits/stdc++.h>
using namespace std;

// so luong tu khac nhau trong chuoi
int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    map<string, int> cnt;
    string word;

    while (ss >> word) {
        for (char &c : word) c = toupper((unsigned char)c);
        cnt[word]++;
    }

    cout << cnt.size() << '\n';
    return 0;
}
