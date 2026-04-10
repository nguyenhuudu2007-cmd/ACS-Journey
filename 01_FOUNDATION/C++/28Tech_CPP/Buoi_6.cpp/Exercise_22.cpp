#include <iostream>
using namespace std;
using ll = long long;
ll a[1001];

void inputArray(int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void printArray(int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    inputArray(n);
    
    bool found = false;
    int foundIndex = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            found = true;
            foundIndex = i;
            break;
        }
    }
    
    if (found) {
        for (int i = foundIndex; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        printArray(n - 1);
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}