#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s, word;
    getline(cin, s);
    stringstream ss(s);

    unordered_map<string, int> count;
    vector<string> order;

    while (ss >> word) {
        if (count[word] == 0) {
            order.push_back(word);
        }
        count[word]++;
    }

    cout << "Theo thứ tự xuất hiện:\n";
    for (string x : order) {
        cout << x << ' ' << count[x] << endl;
    }

    cout << "\nTheo thứ tự chữ cái:\n";
    vector<pair<string,int>> sorted(count.begin(), count.end());
    sort(sorted.begin(), sorted.end(),
         [](const pair<string,int>& a, const pair<string,int>& b){
             return a.first < b.first; // sắp xếp theo từ điển
         });

    for (auto &p : sorted) {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}
