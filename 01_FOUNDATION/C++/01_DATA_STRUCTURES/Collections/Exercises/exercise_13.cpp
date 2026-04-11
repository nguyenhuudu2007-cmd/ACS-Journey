#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    set<int> a, b;
    
    // Đọc mảng a
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    
    // Đọc mảng b
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        b.insert(y);
    }
    
    bool found = false;
    for (auto x : a) {
        if (b.find(x) == b.end()) {  // Không tìm thấy trong b
            if (found) cout << " ";
            cout << x;
            found = true;
        }
    }
    
    if (!found) {
        cout << "NO";
    }
    
    return 0;
}