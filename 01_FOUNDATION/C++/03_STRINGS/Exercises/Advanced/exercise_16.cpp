#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    string date;
    getline(cin, date);

    // --- Chuẩn hoá tên ---
    stringstream ss(name);
    string word;
    vector<string> v;
    while (ss >> word) {
        // Viết thường toàn bộ
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        // Viết hoa chữ cái đầu
        word[0] = toupper(word[0]);
        v.push_back(word);
    }

    cout << "Ten chuan hoa: ";
    for (string x : v) {
        cout << x << ' ';
    }
    cout << endl;

    // --- Chuẩn hoá ngày ---
    stringstream sd(date);
    string d, m, y;
    getline(sd, d, '/');
    getline(sd, m, '/');
    getline(sd, y, '/');

    int day = stoi(d);
    int month = stoi(m);
    int year = stoi(y);

    cout << "Ngay chuan hoa: "
         << setfill('0') << setw(2) << day << "/"
         << setfill('0') << setw(2) << month << "/"
         << year << endl;

    return 0;
}
