#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    multiset<int> ms;
    
    // Đọc mảng ban đầu và thêm vào multiset
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int op, x;
        cin >> op >> x;
        
        if (op == 1) {
            // Thao tác 1: Thêm phần tử X
            ms.insert(x);
        } 
        else if (op == 2) {
            // Thao tác 2: Xóa một phần tử X (nếu có)
            auto it = ms.find(x);
            if (it != ms.end()) {
                ms.erase(it);  // Chỉ xóa một phần tử X duy nhất
            }
            // Nếu không tìm thấy X, không làm gì cả
        } 
        else if (op == 3) {
            // Thao tác 3: Kiểm tra X có tồn tại không
            if (ms.find(x) != ms.end()) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}