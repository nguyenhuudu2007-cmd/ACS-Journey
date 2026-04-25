#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> v;

    // Chuẩn hoá từng từ
    while (ss >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        word[0] = toupper(word[0]);
        v.push_back(word);
    }

    // Tách phần tên (cuối cùng) và phần họ + tên đệm
    string lastName = v.back();
    stringstream name1;
    for (int i = 0; i < (int)v.size() - 1; i++) {
        name1 << v[i] << " ";
    }
    string middle = name1.str();
    if (!middle.empty() && middle.back() == ' ') middle.pop_back();

    // Mẫu 1: Hoang Dinh, NAM
    cout << middle << ", " << lastName << endl;

    // Mẫu 2: NAM, Hoang Dinh
    cout << lastName << ", " << middle << endl;

    return 0;
}
