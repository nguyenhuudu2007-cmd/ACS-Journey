#include <map>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    map<pair<int, int>, bool> pointMap;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pointMap[{x, y}] = true;  // Key là pair, value không quan trọng
    }
    
    cout << pointMap.size() << endl;
    
    return 0;
}