#include <iostream>
#include <algorithm>
using namespace std;

// Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng
int FirstPos(int a[], int n, int x) {
    int left = 0, right = n - 1;
    int res = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Tránh tràn số
        if (a[mid] == x) {
            res = mid;
            right = mid - 1; // Tiếp tục tìm bên trái
        } else if (a[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return res;
}

// Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng
int LastPos(int a[], int n, int x) {
    int left = 0, right = n - 1;
    int res = -1; // Sửa từ -3 thành -1
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
            res = mid;
            left = mid + 1; // Tiếp tục tìm bên phải
        } else if (a[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return res;
}

// Tìm vị trí đầu tiên của phần tử > x trong mảng
int FirstGreater(int a[], int n, int x) {
    auto it = upper_bound(a, a + n, x);
    return (it - a);
}

// Tìm vị trí đầu tiên của phần tử ≥ x trong mảng
int FirstGreaterOrEqual(int a[], int n, int x) {
    auto it = lower_bound(a, a + n, x);
    return (it - a);
}

// Tìm số lần xuất hiện của phần tử X trong mảng
int freq(int a[], int n, int x) {
    int first = FirstPos(a, n, x);
    if (first == -1) return 0; // Không tìm thấy
    int last = LastPos(a, n, x);
    return last - first + 1;
}

int main() {
    int n, x;
    cin >> n >> x;
    int a[10001];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Kiểm tra xem mảng đã được sắp xếp chưa
    // Nếu chưa, cần sắp xếp trước khi dùng binary search
    if (!is_sorted(a, a + n)) {
        sort(a, a + n);
        cout << "Mảng đã được sắp xếp lại.\n";
    }
    
    cout << "First position of " << x << ": " << FirstPos(a, n, x) << endl;
    cout << "Last position of " << x << ": " << LastPos(a, n, x) << endl;
    cout << "First position > " << x << ": " << FirstGreater(a, n, x) << endl;
    cout << "First position >= " << x << ": " << FirstGreaterOrEqual(a, n, x) << endl;
    cout << "Frequency of " << x << ": " << freq(a, n, x) << endl;
    
    return 0;
}