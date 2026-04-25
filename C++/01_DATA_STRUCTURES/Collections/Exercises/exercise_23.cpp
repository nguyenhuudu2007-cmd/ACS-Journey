#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> mp;
    
    // Đếm tần suất các số
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;  // Tự động khởi tạo = 0 nếu chưa có
    }
    
    // In ra các số có tần suất chẵn
    bool found = false;
    for (auto a : mp) {
        if (a.second % 2 == 0 && a.second > 0) {
            if (found) cout << endl;  // Mỗi số trên một dòng
            cout << a.first << " " << a.second;
            found = true;
        }
    }
    
    if (!found) {
        cout << "KHONG TIM THAY";
    }
    
    return 0;
}