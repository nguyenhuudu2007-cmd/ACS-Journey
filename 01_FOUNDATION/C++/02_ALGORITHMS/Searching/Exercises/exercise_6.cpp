#include <bits/stdc++.h>
using namespace std;

int countOddDigits(int x){
    int cnt = 0;
    while(x > 0){
        if((x % 10) % 2 != 0) cnt++;
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
        mp[x] = countOddDigits(x);
    }

    // đổ map → vector
    vector<pair<int,int>> v(mp.begin(), mp.end());

    // sort theo số chữ số lẻ
    sort(v.begin(), v.end(), [](auto a, auto b){
        if(a.second != b.second)
            return a.second < b.second;   // ít → nhiều
        return a.first < b.first;         // phụ: số nhỏ trước
    });

    for(auto a : v){
        cout << a.first << " " << a.second << endl;
    }
}
