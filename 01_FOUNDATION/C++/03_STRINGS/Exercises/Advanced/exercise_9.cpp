#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    // Đọc cả dòng (bao gồm cả dấu cách)
    getline(cin, S);

    int wordCount = 0;
    bool inWord = false;

    for (char ch : S) {
        if (ch != ' ') {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << wordCount << endl;
    return 0;
}
