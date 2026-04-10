#include <iostream>
#include <map>
#include <iterator>
using namespace std;
#define ll long long
int main(){
    multimap<int,int> mp;
    mp.insert({1,2});
    mp.insert({3,4});
    mp.insert({2,5});
    mp.insert({1,10}); //chèn thêm cặp key=1, value=10
    //for each
    for(auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<mp.count(1)<<endl; //đếm số phần tử có key=1
    mp.erase(1);
    for( auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    auto it= mp.find(1);
    mp.erase(it); //xóa phần tử mà it trỏ tới
}