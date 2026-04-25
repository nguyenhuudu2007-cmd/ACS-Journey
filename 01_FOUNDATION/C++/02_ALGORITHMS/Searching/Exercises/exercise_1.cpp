#include <iostream>
#include <set>
using namespace std;
 //Solution 1: Set
int distinct1(const int a[], int n) {
    set<int> se;
    for (int i = 0; i < n; i++) {
        se.insert(a[i]);
    }
    return se.size();
}



 int distinct2(int a[], int mark[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (mark[a[i]] == 0) {
            count++;
            mark[a[i]] = 1;
        }
    }
    return count;
}


 int main(){
    int n; cin>>n;
    int a[1001];
    int mark[1001]={0};
    for ( int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<distinct2(a,mark,n);
 }