#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Mảng F[i] lưu số giá trị khác nhau từ i đến n-1
    vector<int> f(n);
    unordered_set<int> distinctValues;
    
    // Duyệt từ cuối mảng về đầu
    for (int i = n - 1; i >= 0; i--) {
        distinctValues.insert(a[i]);  // Thêm phần tử hiện tại vào set
        f[i] = distinctValues.size(); // Số phần tử khác nhau từ i đến cuối
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int l;
        cin >> l;
        // In ra số giá trị khác nhau từ vị trí L đến cuối mảng
        cout << f[l] << "\n";
    }
    
    return 0;
}