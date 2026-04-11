#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> a;
    for ( int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    cout<<*min_element(a.begin(), a.end())<<endl;
    cout<<*max_element(a.begin(), a.end())<<endl;
    cout<<accumulate(a.begin(), a.end(), 0)<<endl;
    return 0;
}