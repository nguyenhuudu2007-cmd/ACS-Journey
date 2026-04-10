#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.insert({x, y});
    }
    cout << points.size() << endl;
    return 0;
}
