#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    unordered_map<int, bool> mp;
    
    // Đọc và thêm vào map
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num] = true;
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int x;
        cin >> x;
        
        // Kiểm tra và in luôn kết quả
        if (mp.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}