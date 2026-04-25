#include <bits/stdc++.h>
using namespace std;

int count068(int x){
    int cnt = 0;
    while (x > 0){
        int digit = x % 10;
        if (digit == 0 || digit == 6 || digit == 8){
            cnt++;
        }
        x /= 10;
    }
    return cnt;
}

int main(){
    int n; 
    cin >> n;

    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        mp[x] = count068(x);
    }

    vector<pair<int,int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](auto a, auto b){
        if(a.second != b.second)
            return a.second < b.second;  // ít → nhiều
        return a.first < b.first;        // phụ
    });

    for(auto a : v){
        cout << a.first;
    }
}
