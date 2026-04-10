#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        mp[s]++;
    }
    
    // In tất cả
    for (auto& p : mp) {
        cout << p.first << " " << p.second << endl;
    }
    
    // Tìm max và min bằng lambda
    auto max_it = max_element(mp.begin(), mp.end(), 
        [](auto& a, auto& b) { return a.second < b.second; });
    
    auto min_it = min_element(mp.begin(), mp.end(),
        [](auto& a, auto& b) { return a.second < b.second; });
    
    cout <<max_it->first << " " << max_it->second<<endl;
    cout <<min_it->first << " " << min_it->second;
    
    return 0;
}