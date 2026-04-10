#include <bits/stdc++.h>
using namespace std;

//Recursion
int calculate_power( int n, int e){
    if( e==0) return 1;
    return n*calculate_power(n, e-1);
}

int gcdRecrusion( int a, int b ){
    if (b == 0) return a;
    return gcdRecursion(b, a%b );
}

int strLen( char*str ){
    if ( *str =='\0') return 0;
    return 1+strLen(str+1);
}

int recursiveSum ( int arr[], int size ){
    if (size ==0 ) return 0;
    return arr[0]+recursiveSum(arr+1, size -1);
}

int decimalToBinary ( int n){
    if( n==0 ) return 0;
    return n%2 + 10*decimalToBinary(n/2);
}

bool palindromeRecursion(string s)
{
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

int getValueAtIndex(int *ptr, int k){
    if (k == 0) return *ptr;
    return getValueAtIndex(ptr+1, k-1);
}

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int calcSum(int *ptr, int n){
    if (n == 0) return 0;
    return *ptr + calcSum(ptr+1, n-1);
}

int getValueAtIndex(int *ptr, int k) {
    return *(ptr + k);
}

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int calcSum(int *ptr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    return sum;
}

void add(int *ptr, int n, int k) {
    *(ptr + n) = k;
}

int findMax(int *ptr, int n) {
    int maxVal = *ptr;
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > maxVal) {
            maxVal = *(ptr + i);
        }
    }
    return maxVal;
}

void reverse(int *ptr, int n) {
    int *start = ptr;
    int *end = ptr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
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

//Basic Pointer
int* zeros(int n) {
    int* arr = new (nothrow) int[n];
    if (!arr) return nullptr;
    for (int i = 0; i < n; i++) arr[i] = 0;
    return arr;
}

void shallowCopy(int*& newArr, int*& arr) {
    newArr = arr;
}

int** deepCopy(int** matrix, int r, int c) {
    if (r <= 0 || c <= 0) return nullptr;
    int** newMatrix = new int*[r];
    for (int i = 0; i < r; i++) {
        newMatrix[i] = new int[c];
        for (int j = 0; j < c; j++) newMatrix[i][j] = matrix[i][j];
    }
    return newMatrix;
}

void deleteMatrix(int**& matrix, int r) {
    for (int i = 0; i < r; i++) delete[] matrix[i];
    delete[] matrix;
    matrix = NULL;
}

void insertRow(int**& matrix, int r, int c, int* rowArr, int row) {
    // Cấp phát mảng con trỏ mới có r + 1 hàng
    int** newMatrix = new int*[r + 1];
    for (int i = 0; i < row; i++) {
        newMatrix[i] = matrix[i];
    }
    // Chèn hàng mới (cần copy giá trị từ rowArr)
    newMatrix[row] = new int[c];
    for (int j = 0; j < c; j++) newMatrix[row][j] = rowArr[j];

    for (int i = row; i < r; i++) {
        newMatrix[i + 1] = matrix[i];
    }
    delete[] matrix; // Giải phóng mảng con trỏ cũ
    matrix = newMatrix;
}

int** readArray() {
    int** a = new int*[10];
    for (int i = 0; i < 10; i++) {
        a[i] = new int[10];
        bool stopRow = false;
        for (int j = 0; j < 10; j++) {
            if (!stopRow) {
                cin >> a[i][j];
                if (a[i][j] == 0) stopRow = true;
            } else {
                a[i][j] = 0;
            }
        }
    }
    return a;
}

void addElement(int*& arr, int n, int val, int index) {
    int* newArr = new int[n + 1];
    for (int i = 0; i < index; i++) newArr[i] = arr[i];
    newArr[index] = val;
    for (int i = index; i < n; i++) newArr[i + 1] = arr[i];
    delete[] arr;
    arr = newArr;
}

int* flatten(int** matrix, int r, int c) {
    int* res = new int[r * c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[i * c + j] = matrix[i][j];
        }
    }
    return res;
}

char* concatStr(char* str1, char* str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1]) len1++;
    while (str2[len2]) len2++;
    char* res = new char[len1 + len2 + 1];
    for (int i = 0; i < len1; i++) res[i] = str1[i];
    for (int i = 0; i < len2; i++) res[len1 + i] = str2[i];
    res[len1 + len2] = '\0';
    return res;
}

int** insertCol(int**& matrix, int r, int c, int* colArr, int col) {
    // Duyệt qua từng hàng để chèn thêm một phần tử vào cột tương ứng
    for (int i = 0; i < r; i++) {
        // Cấp phát hàng mới có kích thước c + 1
        int* newRow = new int[c + 1];
        
        // Sao chép các phần tử trước vị trí cột cần chèn
        for (int j = 0; j < col; j++) {
            newRow[j] = matrix[i][j];
        }
        
        // Chèn giá trị mới từ colArr vào vị trí col
        newRow[col] = colArr[i];
        
        // Sao chép các phần tử còn lại sau vị trí chèn
        for (int j = col; j < c; j++) {
            newRow[j + 1] = matrix[i][j];
        }
        
        // Giải phóng hàng cũ và cập nhật trỏ tới hàng mới
        delete[] matrix[i];
        matrix[i] = newRow;
    }
    
    // Trả về ma trận đã được điều chỉnh (ma trận mới bây giờ có kích thước r x (c+1))
    return matrix;
}

bool deleteRow(int**& matrix, int r, int c, int row) {
    if (row < 0 || row >= r) return false;
    if (r == 1) { // Xóa hàng cuối cùng
        for (int i = 0; i < r; i++) delete[] matrix[i];
        delete[] matrix;
        matrix = nullptr;
        return true;
    }
    delete[] matrix[row]; // Giải phóng hàng cần xóa
    int** newMatrix = new int*[r - 1];
    for (int i = 0, k = 0; i < r; i++) {
        if (i == row) continue;
        newMatrix[k++] = matrix[i];
    }
    delete[] matrix;
    matrix = newMatrix;
    return true;
}

bool deleteCol(int**& matrix, int r, int c, int col) {
    // 1. Kiểm tra đầu vào hợp lệ (Bẫy nullptr hoặc kích thước âm)
    if (matrix == nullptr || r <= 0 || c <= 0) return false;

    // 2. Kiểm tra cột cần xóa có tồn tại không
    if (col < 0 || col >= c) return false;

    // 3. Xử lý bẫy c == 1: Giải phóng HẾT và set nullptr
    if (c == 1) {
        for (int i = 0; i < r; i++) {
            delete[] matrix[i]; // Giải phóng bộ nhớ của phần tử duy nhất
        }
        delete[] matrix; // GIẢI PHÓNG LUÔN MẢNG CON TRỎ QUẢN LÝ DÒNG
        matrix = nullptr; // QUAN TRỌNG: Set nullptr để tránh dangling pointer
        return true;
    }

    // 4. Trường hợp bình thường (c > 1): Chỉ thay đổi kích thước các hàng
    for (int i = 0; i < r; i++) {
        int* newRow = new int[c - 1];
        for (int j = 0, k = 0; j < c; j++) {
            if (j != col) {
                newRow[k++] = matrix[i][j];
            }
        }
        delete[] matrix[i]; // Giải phóng dòng cũ
        matrix[i] = newRow; // Trỏ tới dòng mới
    }

    return true;
}

//Struct
void addAddendum(SCP &obj, string addendum) {
    // 1. Tạo mảng mới với kích thước tăng thêm 1
    string* newAddendums = new string[obj.numAddendums + 1];
    
    // 2. Sao chép các phụ lục cũ sang mảng mới
    for (int i = 0; i < obj.numAddendums; i++) {
        newAddendums[i] = obj.addendums[i];
    }
    
    // 3. Thêm phụ lục mới vào cuối
    newAddendums[obj.numAddendums] = addendum;
    
    // 4. Giải phóng mảng cũ (nếu có) và cập nhật thông tin
    if (obj.addendums != nullptr) {
        delete[] obj.addendums;
    }
    obj.addendums = newAddendums;
    obj.numAddendums++;
}

SCP createSCP(int id, int objClass, string speConProcedures, string description, string* addendums, int numAddendums) {
    SCP newObj;
    newObj.id = id;
    newObj.objClass = objClass;
    newObj.speConProcedures = speConProcedures;
    newObj.description = description;
    newObj.numAddendums = numAddendums;

    // Deep copy mảng phụ lục
    if (numAddendums > 0 && addendums != nullptr) {
        newObj.addendums = new string[numAddendums];
        for (int i = 0; i < numAddendums; i++) {
            newObj.addendums[i] = addendums[i];
        }
    } else {
        newObj.addendums = nullptr;
    }

    return newObj;
}

#include <iomanip>
#include <sstream>

string convertToString(SCP obj) {
    stringstream ss;
    
    // Format ID: Thêm số 0 vào trước để đủ 3 chữ số
    ss << "Item #: SCP-";
    if (obj.id < 10) ss << "00";
    else if (obj.id < 100) ss << "0";
    ss << obj.id << "\n";

    // Format Object Class
    ss << "Object Class: ";
    if (obj.objClass == 0) ss << "Safe";
    else if (obj.objClass == 1) ss << "Euclid";
    else if (obj.objClass == 2) ss << "Keter";
    ss << "\n";

    // Các thông tin mô tả
    ss << "Special Containment Procedures: " << obj.speConProcedures << "\n";
    ss << "Description: " << obj.description;

    // Các phụ lục
    for (int i = 0; i < obj.numAddendums; i++) {
        ss << "\n" << obj.addendums[i];
    }

    return ss.str();
}

SCP* cloneSCP(SCP* original) {
    if (original == nullptr) return nullptr;

    // 1. Cấp phát vùng nhớ mới cho một đối tượng SCP
    SCP* clone = new SCP;

    // 2. Sao chép các thuộc tính kiểu dữ liệu cơ bản và string
    clone->id = original->id;
    clone->objClass = original->objClass;
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;
    clone->numAddendums = original->numAddendums;

    // 3. Thực hiện Deep Copy cho mảng addendums
    if (original->numAddendums > 0 && original->addendums != nullptr) {
        clone->addendums = new string[original->numAddendums];
        for (int i = 0; i < original->numAddendums; i++) {
            // Sao chép nội dung từng chuỗi phụ lục
            clone->addendums[i] = original->addendums[i];
        }
    } else {
        clone->addendums = nullptr;
    }

    return clone;
}

int compareObjectClass(const SCP &objA, const SCP &objB) {
    if (objA.objClass < objB.objClass) {
        return -1;
    } else if (objA.objClass > objB.objClass) {
        return 1;
    } else {
        return 0;
    }
}

