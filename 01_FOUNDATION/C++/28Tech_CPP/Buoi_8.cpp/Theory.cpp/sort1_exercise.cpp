#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

void input(vector<int>& arr, map<int,int>& mp, int n){
    arr.resize(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
}

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second > b.second;   // tần suất giảm dần
    return a.first < b.first;         // số nhỏ hơn trước
}

int main(){
    int n; cin >> n;
    vector<int> arr;
    map<int,int> mp;

    input(arr, mp, n);

    vector<pair<int,int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);

    for(auto x : v){
        for(int i = 0; i < x.second; i++){
            cout << x.first << " ";
        }
    }
    return 0;
}