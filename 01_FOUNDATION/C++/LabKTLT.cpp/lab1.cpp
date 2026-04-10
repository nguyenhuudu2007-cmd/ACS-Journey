#include <iostream>
#include <cstring>
#include <unordered_set>
#include <fstream>
#include <map>
#include <vector>
#include <set>
using namespace std;
void reverseString( char str[]){
    int n=strlen(str);
    for ( int i=0;i<n/2;i++){
        swap(str[i],str[n-i-1]);
    }
}

void recover(char signal[]){
    int n=strlen(signal);
    for ( int i=0;i<n;i++){
        if( signal[i]>='a'&& signal[i]<='z'){
            signal[i]=signal[i]-'a'+'A';
        }
        else if( signal[i]>='A'&& signal[i]<='Z'){
            signal[i]=signal[i]-'A'+'a';
        }
    }
}

int find(char str[], char substr[]) {
    int lenStr = strlen(str);
    int lenSub = strlen(substr);

    if (lenSub == 0 || lenSub > lenStr) {
        return -1;
    }

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int j = 0;
        while (j < lenSub && str[i + j] == substr[j]) {
            j++;
        }
        if (j == lenSub) {
            return i; // vị trí đầu tiên tìm thấy
        }
    }

    return -1; // không tìm thấy
}

void printFirstRepeatedWord(char str[]) {
    char words[100][100]; // mảng chứa các từ
    int count = 0;

    // Tách từ dựa trên khoảng trắng
    char *token =strtok(str, " ");
    while (token != nullptr) {
        strcpy(words[count], token);
        count++;
        token = strtok(nullptr, " ");
    }

    // Kiểm tra từ lặp lại
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                cout << words[i] << endl;
                return;
            }
        }
    }

   cout << "No Repetition" << endl;
}

void process(const char str[], char outstr[]) {
    int len = std::strlen(str);
    int j = 0;
    bool inSpace = false;

    // Bỏ khoảng trắng đầu
    int i = 0;
    while (i < len && str[i] == ' ') {
        i++;
    }

    // Duyệt chuỗi
    for (; i < len; i++) {
        if (str[i] != ' ') {
            outstr[j++] = str[i];
            inSpace = false;
        } else {
            if (!inSpace) { // chỉ thêm một khoảng trắng nếu trước đó không phải khoảng trắng
                outstr[j++] = ' ';
                inSpace = true;
            }
        }
    }

    // Bỏ khoảng trắng cuối
    if (j > 0 && outstr[j - 1] == ' ') {
        j--;
    }

    outstr[j] = '\0'; // kết thúc chuỗi
}

//---Class String--//
void cutString(string s, int index) {
    if (index >= 0 && index < (int)s.size()) {
        cout << s.substr(index) << endl;
    }
}

void findAllIndex(string s1, string s2) {
    if (s2.empty()) {
        cout << -1;
        return;
    }
    char c = s2[0];
    bool found = false;
    for (int i = 0; i < (int)s1.size(); i++) {
        if (s1[i] == c) {
            if (found) cout << " ";
            cout << i;
            found = true;
        }
    }
    if (!found) cout << -1;
}

void replaceString(string s, string s1, string s2) {
    size_t pos = s.rfind(s1); // tìm vị trí cuối cùng
    if (pos != string::npos) {
        s.replace(pos, s1.size(), s2);
    }
    cout << s << endl;
}

void deleteWord(string s, string s1) {
    size_t pos;
    while ((pos = s.find(s1)) != string::npos) {
        s.erase(pos, s1.size());
    }
    cout << s << endl;
}

string longestPalindrome(string s) {
    int n = s.size();
    int start = 0, maxLen = 1;
    for (int i = 0; i < n; i++) {
        // mở rộng quanh tâm (odd length)
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
        // mở rộng quanh tâm (even length)
        l = i; r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }
    return s.substr(start, maxLen);
}

int longestUniqueSubstring(string s) {
    int n = s.size();
    int maxLen = 0;
    int l = 0;
    unordered_set<char> seen;
    for (int r = 0; r < n; r++) {
        while (seen.count(s[r])) {
            seen.erase(s[l]);
            l++;
        }
        seen.insert(s[r]);
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int findMaxColumn(int arr[][1000], int row, int col) {
    int maxSum = -1e9, idx = 0;
    for (int j = 0; j < col; j++) {
        int sum = 0;
        for (int i = 0; i < row; i++) sum += arr[i][j];
        if (sum > maxSum || (sum == maxSum && j > idx)) {
            maxSum = sum;
            idx = j;
        }
    }
    return idx;
}

int diagonalProduct(int arr[][1000], int row, int col) {
    int product = 1;
    for (int i = 0; i < row && i < col; i++) {
        product *= arr[i][i];
    }
    return product;
}

bool isSymmetric(int arr[][1000], int row, int col) {
    if (row != col) return false;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != arr[j][i]) return false;
        }
    }
    return true;
}

int diagonalDiff(int arr[][1000], int row, int col, int x, int y) {
    int sum1 = 0, sum2 = 0;
    // đường chéo chính qua (x,y)
    for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) sum1 += arr[i][j];
    for (int i = x+1, j = y+1; i < row && j < col; i++, j++) sum1 += arr[i][j];

    // đường chéo phụ qua (x,y)
    for (int i = x, j = y; i >= 0 && j < col; i--, j++) sum2 += arr[i][j];
    for (int i = x+1, j = y-1; i < row && j >= 0; i++, j--) sum2 += arr[i][j];

    return abs(sum1 - sum2);
}

int ascendingRows(int arr[][1000], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        bool ok = true;
        for (int j = 0; j < col-1; j++) {
            if (arr[i][j] > arr[i][j+1]) {
                ok = false;
                break;
            }
        }
        if (ok) count++;
    }
    return count;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return false;
    return true;
}

int primeColumns(int arr[][1000], int row, int col) {
    int count = 0;
    for (int j = 0; j < col; j++) {
        int sum = 0;
        for (int i = 0; i < row; i++) sum += arr[i][j];
        if (isPrime(sum)) count++;
    }
    return count;
}

int specialCells(int arr[][1000], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        int sumRow = 0;
        for (int j = 0; j < col; j++) sumRow += arr[i][j];
        for (int j = 0; j < col; j++) {
            int sumCol = 0;
            for (int k = 0; k < row; k++) sumCol += arr[k][j];
            if (isPrime(sumRow) && isPrime(sumCol)) count++;
        }
    }
    return count;
}

int subMatrix(int arr[][1000], int row, int col) {
    int count = 0;
    for (int i = 0; i < row-1; i++) {
        for (int j = 0; j < col-1; j++) {
            int sum = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
            if (sum % 2 == 1) count++;
        }
    }
    return count;
}

void calSum(string fileName) {
    ifstream fin(fileName);
    int x, sum = 0;
    while (fin >> x) sum += x;
    fin.close();
    cout << sum << endl;
}

void uppercase(string output) {
    string S;
    getline(cin, S);
    for (char &c : S) {
        if (c >= 'a' && c <= 'z') c = c - 'a' + 'A';
    }
    ofstream fout(output);
    fout << S;
    fout.close();
}

void process(string fileName) {
    ifstream fin(fileName);
    int N, M;
    fin >> N >> M;
    double maxAll = -1e9;
    for (int i = 0; i < N; i++) {
        double maxRow = -1e9;
        for (int j = 0; j < M; j++) {
            double x; fin >> x;
            maxRow = max(maxRow, x);
            maxAll = max(maxAll, x);
        }
        cout << maxRow << " ";
    }
    cout << maxAll << endl;
    fin.close();
}

void studendGrading(string fileName) {
    ifstream fin(fileName);
    int N; fin >> N;
    int A=0, B=0, C=0, D=0;
    for (int i = 0; i < N; i++) {
        double nm, ktlt, dsa, ppl;
        fin >> nm >> ktlt >> dsa >> ppl;
        double avg = (nm + ktlt + dsa + ppl) / 4.0;
        bool allAbove5 = (nm>=5 && ktlt>=5 && dsa>=5 && ppl>=5);
        if (avg >= 8 && allAbove5) A++;
        else if (avg >= 6.5 && allAbove5) B++;
        else if (avg >= 5 && allAbove5) C++;
        else D++;
    }
    fin.close();
    cout << A << " " << B << " " << C << " " << D << endl;
}

void calMoney(string price, string buy) {
    ifstream fin(price);
    int N; fin >> N;
    map<int,int> priceMap;
    for (int i=0;i<N;i++) {
        int id, p; fin >> id >> p;
        priceMap[id] = p;
    }
    fin.close();

    ifstream fin2(buy);
    int M; fin2 >> M;
    for (int i=0;i<M;i++) {
        string name; fin2 >> name;
        int total = 0;
        while (!fin2.eof()) {
            int id, qty;
            if (!(fin2 >> id)) break;
            if (!(fin2 >> qty)) break;
            total += priceMap[id] * qty;
        }
        cout << name << " " << total << endl;
    }
    fin2.close();
}

void manage(string library, string book, string author) {
    int N; ifstream fin(library); fin >> N;
    map<string, vector<int>> libBooks;
    for (int i=0;i<N;i++) {
        string libName; fin >> libName;
        vector<int> ids(5);
        for (int j=0;j<5;j++) fin >> ids[j];
        libBooks[libName] = ids;
    }
    fin.close();

    int P; ifstream fin3(author); fin3 >> P;
    map<string, set<int>> authorBooks;
    for (int i=0;i<P;i++) {
        string auth; fin3 >> auth;
        int id;
        while (fin3.peek()!='\n' && fin3 >> id) {
            authorBooks[auth].insert(id);
        }
    }
    fin3.close();

    string L, A;
    cin >> L >> A;
    bool found = false;
    for (int id : libBooks[L]) {
        if (authorBooks[A].count(id)) {
            found = true;
            break;
        }
    }
    cout << (found ? "True" : "False") << endl;
}

long factorial(int N) {
    if (N == 0 || N == 1) return 1;
    return N * factorial(N - 1);
}

void sum2(int* array, int size, int& result) {
    result = 0;
    for (int i = 0; i < size; i++) result += array[i];
}

bool completeNum(int N) {
    int sum = 0;
    for (int i = 1; i <= N/2; i++) {
        if (N % i == 0) sum += i;
    }
    return sum == N;
}

bool isPalindrome(const char* str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        if (str[l] != str[r]) return false;
        l++; r--;
    }
    return true;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return false;
    return true;
}

bool specialNumber(int n) {
    if (!isPrime(n)) return false;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}

void encrypt(char* text, int shift) {
    for (int i = 0; text[i]; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z') text[i] = (c - 'a' + shift) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z') text[i] = (c - 'A' + shift) % 26 + 'A';
    }
}

void decrypt(char* text, int shift) {
    for (int i = 0; text[i]; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z') text[i] = (c - 'a' - shift + 26) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z') text[i] = (c - 'A' - shift + 26) % 26 + 'A';
    }
}

bool uniqueElements(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) return false;
        }
    }
    return true;
}

int numberOfDiffCharac(string str) {
    bool seen[26] = {false};
    int count = 0;
    for (char c : str) {
        if (!seen[c - 'a']) {
            seen[c - 'a'] = true;
            count++;
        }
    }
    return count;
}
