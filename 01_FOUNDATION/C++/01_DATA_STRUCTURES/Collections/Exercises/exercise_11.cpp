#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_set<int> set1, set2;
    vector<int> result;
    
    // Đọc mảng 1
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        set1.insert(x);
    }
    
    // Đọc mảng 2
    for (int j = 0; j < m; j++) {
        int y;
        cin >> y;
        set2.insert(y);
    }
    
    // Tìm phần tử chỉ có trong set1
    for (int x : set1) {
        if (set2.find(x) == set2.end()) {
            result.push_back(x);
        }
    }
    
    // Tìm phần tử chỉ có trong set2
    for (int y : set2) {
        if (set1.find(y) == set1.end()) {
            result.push_back(y);
        }
    }
    
    // Sắp xếp kết quả
    sort(result.begin(), result.end());
    
    // In kết quả
    for (int x : result) {
        cout << x << " ";
    }
    
    return 0;
}