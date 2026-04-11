#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    unordered_map<string, string> dict;
    
    for (int i = 0; i < n; i++) {
        string key, value;
        cin >> key >> value;
        dict[key] = value;
    }
    
    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        string query;
        cin >> query;
        
        auto it = dict.find(query);
        if (it != dict.end()) {
            cout << it->second << "\n";
        } else {
            cout << "Not found\n";
        }
    }
    
    return 0;
}