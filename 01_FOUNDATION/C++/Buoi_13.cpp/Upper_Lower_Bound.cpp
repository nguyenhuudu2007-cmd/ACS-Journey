#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

//lower_bound(): tìm vị trí đầu tiên của phần tử >= x trong mảng, vector tăng dần
//Nếu mà không tìm thấy thì sẽ trả về a+n, a.end()
//upper_bound(): tìm vị trí đầu tiên của phần tử >x trong mảng, vector tăng dần
//Nếu mà không tìm thấy thì sẽ trả về a+n, a.end()

int main(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    auto it=upper_bound(a.begin(), a.end(), x);
    int chiso= it-a.begin();
    cout<<chiso<<endl;
    return 0;
}