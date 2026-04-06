#include <iostream>
#include <vector>
#include <iterator>
#include <utility>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }    
    cout<<endl;
    a.erase(a.begin()+1, a.begin()+3); //xóa phần tử ở chỉ số 1
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
