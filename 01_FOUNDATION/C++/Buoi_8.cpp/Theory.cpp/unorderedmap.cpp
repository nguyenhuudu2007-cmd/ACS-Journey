#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
    unordered_map<int,int> mp;
    mp.insert({1,2});
    mp.insert({1,3}); //không cập nhật value của key 1
    mp.insert({3,4});
    mp.insert({2,5});
    mp.insert({2,6}); //không cập nhật value của key 2
    for(auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}