#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size() << endl;
    
    if (s.empty()) return 0;
    
    // In min và max
    cout << *s.begin() << " " << *s.rbegin() << endl;
    
    // In số nhỏ thứ 2 và lớn thứ 2 nếu có
    if (s.size() >= 2) {
        auto it = next(s.begin());  // Phần tử thứ 2
        auto rit = next(s.rbegin());  // Phần tử lớn thứ 2
        
        cout << *it << " " << *rit << endl;
    }
    
    return 0;
}