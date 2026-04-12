#include <iostream>
#include <string>
using namespace std;

//Chuẩn hoá ngày tháng năm dd/mm/yyyy
int main() {
    string s;
    cin >> s;

    string day = "", month = "", year = "";
    int cnt = 0;

    for (char x : s) {
        if (x == '/') cnt++;
        else {
            if (cnt == 0) day += x;
            else if (cnt == 1) month += x;
            else year += x;
        }
    }

    if (day.size() == 1) day = "0" + day;
    if (month.size() == 1) month = "0" + month;

    cout << day << "/" << month << "/" << year;

    return 0;
}
