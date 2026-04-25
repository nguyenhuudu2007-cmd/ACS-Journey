#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    map<int, pair<bool, bool>> presence;  // (có trong mảng 1?, có trong mảng 2?)
    vector<int> result;
    
    // Đánh dấu presence
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        presence[x].first = true;
    }
    
    for (int j = 0; j < m; j++) {
        int y;
        cin >> y;
        presence[y].second = true;
    }
    
    // Lọc ra những phần tử chỉ có ở một mảng
    for (auto& p : presence) {
        bool inFirst = p.second.first;
        bool inSecond = p.second.second;
        
        // XOR: chỉ true khi một trong hai true
        if (inFirst ^ inSecond) {
            result.push_back(p.first);
        }
    }
    
    for (int x : result) {
        cout << x << " ";
    }
    
    return 0;
}