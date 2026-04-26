#include <iostream>
using namespace std;

int getValueAtIndex( int *ptr, int k ){
    return *(ptr+k);
}

void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int calcSum(int *ptr, int n){
    int sum=0;
    for ( int i=0;i<n;i++){
        sum+=*(ptr+n);
    }
    return sum;
}

void add(int *ptr, int n, int k){
    *(ptr+n)=k;
}

int findMax(int *ptr, int n){
    int maxVal=*ptr;
    for ( int i=0;i<n;i++){
        if(*(ptr+i)>maxVal){
            maxVal=*(ptr+i);
        }
    }
    return maxVal;    
}

void reverse(int *ptr, int n){
    int *left=ptr;
    int *right=ptr+n-1;
    while (left<right){int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

bool isSymmetry(int *head, int *tail) {
    while (head < tail) {
        if (*head != *tail) return false;
        head++;
        tail--;
    }
    return true;
}

int* zeros(int n){
    int* arr=new (nothrow) int[n];
    if( !arr ) return nullptr;
    for ( int i=0;i<n;i++) arr[i]=0;
    return arr;
}

void shallowCopy(int*& newArr, int*& arr) {
    newArr=arr;
}

int** deepCopy(int** matrix, int r, int c){
    if (r<=0 || c<=0 ) return nullptr;
    int **newMatrix= new int*[r];
    for ( int i=0;i<r;i++){
        newMatrix[i]=new int[c];
        for ( int j=0;j<c;j++){
            newMatrix[i][j]=matrix[i][j];
        }
    }
    return newMatrix;
}

void deleteMatrix(int**& matrix, int r){
    for ( int i=0;i<r;i++){
        delete[] matrix[i];
    }

    delete[] matrix;
    matrix=nullptr;
}

void insertRow(int**& matrix, int r, int c, int* rowArr, int row){
    int** newMatrix=new int*[r+1];
    for ( int i=0;i<r;i++){
        newMatrix[i]=matrix[i];
    }
    newMatrix[row]=new int[c];
    for ( int j=0;j<c;j++){
        newMatrix[row][j]=rowArr[j];
    }

    delete[] matrix;
    matrix=newMatrix;
}

int** readArray(){
    int **a=new int*[10];
    for ( int i=0;i<10;i++){
        bool stopRow=false;
        for ( int j=0;j<10;j++){
            if (!stopRow){
                cin>>a[i][j];
                if( a[i][j]==0) stopRow=true;
            }else{
                a[i][j]=0;
            }
        }
    }
    return a;
}