#include <iostream>
using namespace std;

int gcdRecursion( int a, int b ){
    if( b==0 ) return a;
    return gcdRecursion(b%a,a);
}

int calculate_power( int n, int e ){
    if( e==0 ) return 1;
    return n*calculate_power(n,e-1);
}

int strLen(char* str) {
    if (*str=='\0') return 0;
    return 1+strLen(str+1);
}

int recursiveSum ( int arr[], int size ){
    if( size==0 )return 0;
    return arr[0]+recursiveSum(arr+1, size-1);
}

bool palindromeRecursion(string s){
    if (s.length() <= 1) return true;
    if (s[0] != s[s.length() - 1]) return false;
    return palindromeRecursion(s.substr(1, s.length() - 2));
}

int findOccurences ( int nums[], int size, int element) {
    if (size == 0) return 0;
    return (nums[0] == element) + findOccurences(nums+1, size-1, element);
}

int countWayofSum ( int n, int sum){
    if ( sum == 0) return 1;
    if ( sum < 0 || n <= 0) return 0;
    return countWayofSum(n-1, sum) + countWayofSum(n, sum-n);
}

