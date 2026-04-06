#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    set<int> check_n, check_m, result;
    
    // Đọc mảng 1
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        check_n.insert(x);
    }
    
    // Đọc mảng 2
    for (int j = 0; j < m; j++) {
        int y;
        cin >> y;
        check_m.insert(y);
    }
    
    // Tìm phần tử khác nhau
    for (auto x : check_n) {
        if (check_m.count(x) == 0)
            result.insert(x);
    }
    
    for (auto x : check_m) {
        if (check_n.count(x) == 0)
            result.insert(x);
    }
    
    // In kết quả (đã tự động sắp xếp)
    if (result.empty()) {
        cout << "NO DIFFERENCE";
    } else {
        for (auto x : result) {
            cout << x << " ";
        }
    }
    
    return 0;
}