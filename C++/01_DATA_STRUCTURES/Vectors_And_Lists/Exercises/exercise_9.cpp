#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<pair<int, int>> freq;
    
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        bool found = false;
        for (auto &p : freq) {
            if (p.first == val) {
                p.second++;
                found = true;
                break;
            }
        }
        if (!found) {
            freq.push_back({val, 1});
        }
    }
    
    for (auto &p : freq) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}