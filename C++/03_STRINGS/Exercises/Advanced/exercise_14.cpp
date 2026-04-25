#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string s, word;
    getline(cin, s);
    stringstream ss(s);

    map<string,int> count;
    int maxVal = -1;
    int minVal = 1e9;
    string res_max, res_min;

    while (ss >> word) {
        count[word]++;
    }

    for (auto it : count) {
        if (it.second > maxVal) {
            maxVal = it.second;
            res_max = it.first;
        }
        if (it.second < minVal) {
            minVal = it.second;
            res_min = it.first;
        }
    }

    cout << res_max << " " << maxVal << endl;
    cout << res_min << " " << minVal << endl;

    return 0;
}
