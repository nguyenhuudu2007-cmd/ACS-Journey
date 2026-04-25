#include <bits/stdc++.h>
using namespace std;
 #include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second < b.second;  // tiêu chí chính
    return a.first > b.first;        // phụ
}

int main(){
    int n; 
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    for(auto a : v){
        cout << a.first << " " << a.second << endl;
    }
}
