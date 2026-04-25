#include <iostream>
using namespace std;

// ===============================
// HÀM TÍNH THỨ SIÊU NHANH VỚI ZELLER
// ===============================
int zellerCongruence(int day, int month, int year) {
    // Zeller's Congruence: tính thứ trong tuần
    // Trả về: 0=CN, 1=T2, 2=T3, 3=T4, 4=T5, 5=T6, 6=T7
    
    if (month < 3) {
        month += 12;
        year--;
    }
    
    int K = year % 100;    // Năm của thế kỷ
    int J = year / 100;    // Thế kỷ
    
    // Công thức Zeller
    int h = (day + (13*(month+1))/5 + K + K/4 + J/4 + 5*J) % 7;
    
    // Chuyển đổi về 0=CN, 1=T2, ..., 6=T7
    return (h + 6) % 7;
}

// ===============================
// HÀM KIỂM TRA NĂM NHUẬN
// ===============================
bool nhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// ===============================
// HÀM KIỂM TRA NGÀY HỢP LỆ
// ===============================
bool check(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = nhuan(year) ? 29 : 28;
            break;
        default:
            return false;
    }
    return day <= daysInMonth;
}

// ===============================
// HÀM CHÍNH - TỐI ƯU HÓA
// ===============================
int main() {
    int day0, daym, year0, year1, month;
    
    cout << "Nhap thu, ngay, thang, nam cho truoc: ";
    cin >> day0 >> daym >> month >> year0;
    cout << "Nhap nam can xac dinh thu: ";
    cin >> year1;

    // Kiểm tra tính hợp lệ
    if (!check(daym, month, year0)) {
        cout << "Ngay thang nam khong hop le!" << endl;
        return 0;
    }

    if (year1 < 1) {
        cout << "Nam khong hop le!" << endl;
        return 0;
    }

    if (!check(daym, month, year1)) {
        cout << "Ngay " << daym << "/" << month << "/" << year1
             << " khong hop le!" << endl;
        return 0;
    }

    if (day0 < 1 || day0 > 7) {
        cout << "Thu khong hop le!" << endl;
        return 0;
    }

    // ===============================
    // PHẦN CẢI TIẾN: SỬ DỤNG ZELLER
    // ===============================
    
    // Tính thứ của ngày đã biết bằng Zeller để kiểm tra
    int calculatedDay0 = zellerCongruence(daym, month, year0);
    // Zeller trả về 0=CN, chuyển về 1=CN
    calculatedDay0 = (calculatedDay0 == 0) ? 1 : calculatedDay0 + 1;
    
    // Kiểm tra xem thứ nhập vào có khớp với Zeller không
    if (calculatedDay0 != day0) {
        cout << "Canh bao: Thu ban nhap (" << day0 
             << ") khong khop voi tinh toan (" 
             << calculatedDay0 << ")!" << endl;
        // Vẫn tiếp tục tính, nhưng dùng giá trị từ Zeller
        day0 = calculatedDay0;
    }

    // Tính thứ trong năm mới bằng Zeller
    int newDayOfWeek = zellerCongruence(daym, month, year1);
    // Chuyển về định dạng 1-7
    newDayOfWeek = (newDayOfWeek == 0) ? 1 : newDayOfWeek + 1;

    // Hiển thị kết quả
    cout << "\n=== KET QUA ===" << endl;
    cout << "Ngay " << daym << "/" << month << "/" << year0 
         << " la: ";
    if (day0 == 1) cout << "CN";
    else cout << "Thu " << day0;
    cout << endl;

    cout << "Ngay " << daym << "/" << month << "/" << year1 
         << " la: ";
    if (newDayOfWeek == 1) cout << "CN";
    else cout << "Thu " << newDayOfWeek;
    cout << endl;

    // ===============================
    // THÔNG TIN BỔ SUNG
    // ===============================
    cout << "\n=== THONG TIN BO SUNG ===" << endl;
    
    // Kiểm tra năm nhuận
    cout << "Nam " << year0 << (nhuan(year0) ? " LA" : " KHONG PHAI") 
         << " nam nhuan" << endl;
    cout << "Nam " << year1 << (nhuan(year1) ? " LA" : " KHONG PHAI") 
         << " nam nhuan" << endl;
    
    // Tính sự chênh lệch
    int yearDiff = year1 - year0;
    cout << "Chenh lech: " << abs(yearDiff) << " nam" << endl;
    
    // Tính thứ của ngày 1/1 mỗi năm
    int firstDayYear0 = zellerCongruence(1, 1, year0);
    int firstDayYear1 = zellerCongruence(1, 1, year1);
    
    string firstDays[] = {"CN", "T2", "T3", "T4", "T5", "T6", "T7"};
    cout << "Ngay 1/1/" << year0 << " la: " << firstDays[firstDayYear0] << endl;
    cout << "Ngay 1/1/" << year1 << " la: " << firstDays[firstDayYear1] << endl;
    
    return 0;
}
