#include <iostream>
#include <utility>
using namespace std;
int main(){
    //pair<int,int> a=make_pair(20,50);
    pair<int,int> a={10, 20};
    pair<int,pair<int,int>> b;
    cin>>b.first>>b.second.first>>b.second.second;
    cout<<a.first<<" "<<a.second;
    return 0;
}