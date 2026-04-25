#include <iostream>
#include <cstring>
using namespace std;

//tính giai thừa
long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

//tổng các phần tử trong mảng số nguyên
void sum2 ( int* array, int size, int& result ){
    result=0;
    for ( int i=0;i<size;i++ ){
        result += array[i];
    }
}

//Số hoàn hảo
bool completeNum ( int N ){
    int sum=0;
    for ( int i=1;i<N/2;i++){
        if( N%i==0){
            sum+=i;
        }
    }
    return sum==N;
}

//palindrome
bool isPalindrome ( const char *str ){
    int left=0;
    int right=strlen(str)-1;
    while (left<right){
        if( str[left]!=str[right]){
            return false;
            left++;right--;
        }
    }
    return true;
}



