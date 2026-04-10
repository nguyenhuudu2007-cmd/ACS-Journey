#include <iostream>
using namespace std;

using ll = long long;

/* Kiểm tra số nguyên tố */
bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

/* Kiểm tra số thuận nghịch */
bool isPalindrome(ll n) {
    if (n < 0) return false;

    ll original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

/* Kiểm tra số chính phương */
bool isPerfectSquare(ll n) {
    if (n < 0) return false;
    ll r = 0;
    while (r * r < n) r++;
    return r * r == n;
}

/* Kiểm tra tổng chữ số là số nguyên tố */
bool isDigitSumPrime(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    int n;
    cin >> n;

    ll a[1001];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cntPrime = 0;
    int cntPalindrome = 0;
    int cntSquare = 0;
    int cntDigitSumPrime = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) cntPrime++;
        if (isPalindrome(a[i])) cntPalindrome++;
        if (isPerfectSquare(a[i])) cntSquare++;
        if (isDigitSumPrime(a[i])) cntDigitSumPrime++;
    }

    cout << cntPrime << " "
         << cntPalindrome << " "
         << cntSquare << " "
         << cntDigitSumPrime << endl;

    return 0;
}
