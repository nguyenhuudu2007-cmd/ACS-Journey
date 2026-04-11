#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    multiset<int> ms;
    
    // Đọc mảng ban đầu
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        int op, x;
        cin >> op >> x;
        
        if (op == 1) {
            // Thao tác 1: Thêm phần tử x
            ms.insert(x);
        } 
        else if (op == 2) {
            // Thao tác 2: Xóa một phần tử x (nếu có)
            auto it = ms.find(x);
            if (it != ms.end()) {
                ms.erase(it);  // Chỉ xóa một phần tử tại iterator đó
            }
        } 
        else if (op == 3) {
            // Thao tác 3: Tìm phần tử đầu tiên >= x
            auto it = ms.lower_bound(x);  // Tìm phần tử đầu tiên >= x
            if (it != ms.end()) {
                cout << *it << "\n";
            } else {
                cout << "-1\n";
            }
        } 
        else if (op == 4) {
            // Thao tác 4: Tìm phần tử lớn nhất <= x
            auto it = ms.upper_bound(x);  // Tìm phần tử đầu tiên > x
            
            // Nếu it là begin(), không có phần tử nào <= x
            if (it == ms.begin()) {
                cout << "-1\n";
            } else {
                --it;  // Lùi về phần tử cuối cùng <= x
                cout << *it << "\n";
            }
        }
    }
    
    return 0;
}