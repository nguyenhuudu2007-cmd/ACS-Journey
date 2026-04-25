#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;

void reverse(char str[]){
    for ( int i=0;i<strlen(str)/2;i++){
        swap(str[i],str[strlen(str)-i-1]);
    }
}

void recover(char signal[]){
    int n=strlen(signal);
    for ( int i=0;i<n;i++){
        if( signal[i]>='a' && signal[i]<='z'){
            signal[i]=toupper(signal[i]);
        }
        else if( signal[i]>='A' && signal[i]<='Z'){
            signal[i]=tolower(signal[i]);
        }
    }
}

int find(char str[], char substr[]){
    int lenStr=strlen(str);
    int lenSub=strlen(substr);
    if (lenSub>lenStr ||lenSub==0 ) return -1;

    for ( int i=0;i<=lenStr-lenSub;i++){
        bool match = true;
        for (int j=0;j<lenSub;j++){
            if (str[i+j] != substr[j]){
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return -1;
}

#include <iostream>
#include <cstring>
using namespace std;

void printFirstRepeatedWord(char str[]) {
    char seen[100][100];
    int count = 0;

    char word[100];
    int len = 0;
    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[len++] = str[i];
        } else {
            if (len > 0) {
                word[len] = '\0';

                for (int j = 0; j < count; j++) {
                    if (strcmp(word, seen[j]) == 0) {
                        cout << word << endl;
                        return;
                    }
                }

                strcpy(seen[count], word); 
                count++;
                len = 0;
            }
        }
    }

    cout << "No Repetition" << endl;
}

void process(const char str[], char outstr[]){
    int len=strlen(str);
    bool inSpace = false;
    int j=0;

    //bỏ khoảng trắng
    int i=0;
    while (i<len && str[i]==' '){
        i++;
    }

    //duyệt chuỗi
    for (; i<len;i++){
        if( str[i]!=' '){
            outstr[i]=str[i];
            inSpace=false;
        }else{
            if(!inSpace){
                outstr[j++]=' ';
            }
        }
    }

    //bỏ qua khoảng trắng cuối
    if( j>0 && outstr[j-1]==' '){
        j--;
    }
    outstr[j]='\0';//kết thúc chuỗi
}
