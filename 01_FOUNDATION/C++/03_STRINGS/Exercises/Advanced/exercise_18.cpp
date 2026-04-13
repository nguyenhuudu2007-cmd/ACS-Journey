#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // bỏ dòng xuống sau số N

    while (N--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<string> tokens;
        string word;

        // Tách các từ trong dòng
        while (ss >> word) {
            tokens.push_back(word);
        }

        // Từ cuối cùng là ngày sinh
        string birth = tokens.back();
        tokens.pop_back();

        // Chuẩn hoá tên: viết thường toàn bộ
        for (string &w : tokens) {
            transform(w.begin(), w.end(), w.begin(), ::tolower);
        }

        // Lấy tên (từ cuối cùng trong tokens)
        string lastName = tokens.back();

        // Lấy chữ cái đầu của họ và tên đệm
        string initials = "";
        for (int i = 0; i < (int)tokens.size() - 1; i++) {
            initials += tokens[i][0];
        }

        // Tạo email
        string email = lastName + initials + "@xyz.edu.vn";

        // Tạo mật khẩu: bỏ dấu '/'
        string password = "";
        for (char c : birth) {
            if (c != '/') password += c;
        }

        cout << email << endl;
        cout << password << endl;
    }

    return 0;
}
