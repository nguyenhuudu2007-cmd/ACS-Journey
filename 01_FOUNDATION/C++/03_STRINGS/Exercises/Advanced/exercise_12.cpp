#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

//sắp xếp các từ trong chuỗi 2
bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false; // nếu khác nhau thì không phải palindrome
        }
        left++;
        right--;
    }
    return true; // nếu duyệt hết mà không sai thì là palindrome
}


int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while (ss>>word){
        if( isPalindrome(word)){
            cout<<word<<' ';
        }
    }
}