#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    map<int, int> freq;  // Dùng map thay vì unordered_map
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
        cout << freq[a[i]] << " ";
    }
    
    return 0;
}