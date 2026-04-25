#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Bước 1: Sắp xếp mảng
    sort(arr.begin(), arr.end());
    
    int q;
    cin >> q;
    
    while (q--) {
        int x;
        cin >> x;
        
        // Bước 2: Tìm kiếm nhị phân
        bool found = binary_search(arr.begin(), arr.end(), x);
        
        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}