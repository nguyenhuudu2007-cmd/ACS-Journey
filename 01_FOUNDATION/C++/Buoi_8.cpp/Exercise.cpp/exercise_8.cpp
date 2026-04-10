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
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    
    int q;
    cin >> q;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int x;
            cin >> x;
            ms.insert(x);
        } else if (op == 2) {
            int x;
            cin >> x;
            ms.erase(x);
        } else if (op == 3) {
            if (!ms.empty()) {
                cout << *ms.begin() << "\n";
            }
        } else if (op == 4) {
            if (!ms.empty()) {
                cout << *ms.rbegin() << "\n";
            }
        }
    }
    
    return 0;
}