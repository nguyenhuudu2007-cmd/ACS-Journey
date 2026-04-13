#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    unordered_map<string,int> used; // lưu số lần email đã xuất hiện

    while (N--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<string> tokens;
        string word;

        while (ss >> word) {
            tokens.push_back(word);
        }

        string birth = tokens.back();
        tokens.pop_back();

        // chuẩn hoá tên
        for (string &w : tokens) {
            transform(w.begin(), w.end(), w.begin(), ::tolower);
        }

        string lastName = tokens.back();
        string initials = "";
        for (int i = 0; i < (int)tokens.size() - 1; i++) {
            initials += tokens[i][0];
        }

        string baseEmail = lastName + initials;
        used[baseEmail]++;

        string email;
        if (used[baseEmail] == 1) {
            email = baseEmail + "@xyz.edu.vn";
        } else {
            email = baseEmail + to_string(used[baseEmail]) + "@xyz.edu.vn";
        }

        // mật khẩu
        string password = "";
        for (char c : birth) {
            if (c != '/') password += c;
        }

        cout << email << endl;
        cout << password << endl;
    }

    return 0;
}
