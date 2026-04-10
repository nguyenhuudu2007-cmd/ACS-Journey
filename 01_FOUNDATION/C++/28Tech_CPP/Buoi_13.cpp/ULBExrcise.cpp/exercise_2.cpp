#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> firstSort(const vector<int>& a) {
    multiset<int> odd, even;
    vector<int> result;

    for (int x : a) {
        if (x % 2 != 0) odd.insert(x);
        else even.insert(x);
    }

    result.insert(result.end(), odd.begin(), odd.end());
    result.insert(result.end(), even.begin(), even.end());

    return result;
}

vector<int> secondSort( const vector<int>&a){
    vector<int>odd,even;
    vector<int> result;

    for ( int x:a){
        if( x%2!=0) odd.push_back(x);
        else even.push_back(x);
    }

}
int main() {
    int n; 
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> v = firstSort(a);

    for (int x : v) {
        cout << x << ' ';
    }
}
