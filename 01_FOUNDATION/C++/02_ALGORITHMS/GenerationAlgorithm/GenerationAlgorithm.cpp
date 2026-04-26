#include <iostream>
using namespace std;

int n; 
int a[100]; 

void generation(){
    for (int i = 0; i < n; i++) a[i] = 0;
}

bool check() {
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) return false;
    }
    return true;
}

void sinh(){
    // Bat dau tu bit cuoi cung
    int i = n - 1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i >= 0) a[i] = 1;
}

int main(){
    cin >> n;
    generation();

    while (true) {
        for (int i = 0; i < n; ++i) {
            cout << a[i];
        }
        cout << endl;

        if (check()) break;
        sinh();
    }

    return 0;
}