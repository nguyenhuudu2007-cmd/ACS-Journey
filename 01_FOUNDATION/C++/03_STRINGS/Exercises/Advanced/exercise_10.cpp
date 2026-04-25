#include <bits/stdc++.h>
using namespace std;

//Số từ khác nhau trong chuỗi
int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    unordered_set<string> seen;   // kiểm tra trùng lặp
    vector<string> order;         // lưu thứ tự xuất hiện

    while (ss >> word) {
        if (seen.find(word) == seen.end()) {
            seen.insert(word);
            order.push_back(word);
        }
    }

    // In ra theo thứ tự xuất hiện
    for (string x : order) {
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}
