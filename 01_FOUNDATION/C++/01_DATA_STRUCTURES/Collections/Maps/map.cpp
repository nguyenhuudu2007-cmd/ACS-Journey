#include <iostream>
#include <map>
#include <iterator>
using namespace std;
#define ll long long
//<key,value>
//template <typename K, typename V>
//insert: logN
//mp[key]=value
//find(x): logN
//count(x): logN
//erase(x): logN
int main(){
    map<int,int> mp;
    mp.insert({1,2});
    mp.insert({3,4});
    mp.insert({2,5});
    mp[7]=8; //cách khác để chèn
    mp[1]=10; //cập nhật value của key 1

    //for each
    for(auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //iterator
    for ( map<int,int>::iterator it = mp.begin(); it != mp.end(); it++ ) {
        cout<<(*it).first<<" "<<(*it).second<<endl;      //cout<<it->first<<" "<<it->second<<endl;
    }

    //find
    map<int,int>::iterator it = mp.find(3);
    if(it != mp.end()){
        cout<<"Found: "<<it->first<<" "<<it->second<<endl;
    } else {
        cout<<"Not found"<<endl;
    }

    //count
    if(mp.count(5)){
        cout<<"Key 5 exists"<<endl;
    } else {
        cout<<"Key 5 does not exist"<<endl;
    }

    //erase
    auto it= mp.find(1);
    mp.erase(2); //xóa key 2
    for (auto p: mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    //Frequency map
    map <ll, int> mp2;
    int n; cin>>n;
    int a[10000001];
    for ( int i=0; i<n; i++ ) {
        cin>>a[i];
        mp2[a[i]]++; //tăng tần số của a[i]
    }
    for ( auto p: mp2 ) {
        cout<<p.first<<" "<<p.second<<endl;
    }
}