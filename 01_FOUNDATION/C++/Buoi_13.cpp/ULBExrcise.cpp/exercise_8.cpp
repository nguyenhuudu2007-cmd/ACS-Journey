#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++){
        if (x % i == 0) return false;
    }
    return true;
}

int countPrimeDigits(int x){
    int cnt = 0;
    while (x > 0){
        int digit = x % 10;
        if (isPrime(digit)){
            cnt++;
        }
        x /= 10;
    }
    return cnt;
}   

bool cmp( int a, int b){
    int countA = countPrimeDigits(a);
    int countB = countPrimeDigits(b);
    if (countA != countB)
        return countA > countB;  // nhiều → ít
}

int main(){
    int n; 
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), cmp);

    for(auto a : v){
        cout << a << " ";
    }
}