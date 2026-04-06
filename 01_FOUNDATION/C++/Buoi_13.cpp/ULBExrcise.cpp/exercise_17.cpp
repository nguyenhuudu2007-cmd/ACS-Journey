#include <bits/stdc++.h>
using namespace std;

bool set_inquiry( const set<int>&se, int x){
    auto it=se.find(x);
    if( it==se.end()) return false;
    return true;
}

bool map_inquiry( const map<int, int>&mp, int x){
    auto it=mp.find(x);
    if( it==mp.end()) return false;
    return true;
}

boolbinary_search_vector( const vector<int>&A, int x){
    return binary_search( A.begin(), A.end(), x);
}

int main(){
    int n, m, k, x;
    cin >> n >> m >> k >> x;

    set<int> se;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        se.insert(val);
    }

    map<int, int> mp;
    for(int i = 0; i < m; i++){
        int key, val; cin >> key >> val;
        mp[key] = val;
    }

    vector<int> A(k);
    for(int i = 0; i < k; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end()); // Bắt buộc phải sắp xếp

    cout << (set_inquiry(se, x) ? "Found in set\n" : "Not found in set\n");
    cout << (map_inquiry(mp, x) ? "Found in map\n" : "Not found in map\n");
    cout << (binary_search_vector(A, x) ? "Found in vector\n" : "Not found in vector\n");

    return 0;
}