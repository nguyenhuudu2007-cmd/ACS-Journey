#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];
void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void reverseArray1( int n){
    for( int i=0;i<n/2;i++){
        int tmpt = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tmpt;
    }
}

void reverseArrayRecursive(int left, int right) {
    if (left >= right) {
        return;
    } else {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        reverseArrayRecursive(left + 1, right - 1);
    }
}

void reverseArray2 ( int left, int right){
    while ( left<right){
        int tmpt=a[left];
        a[left]=a[right];
        a[right]=tmpt;
        left++;
        right--;
    }
}


int main() {
    int n;
    cin >> n;
    int left = 0;
    int right = n - 1;
    inputArray(n);
    reverseArray2(left, right);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}