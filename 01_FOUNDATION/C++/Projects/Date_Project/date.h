#ifndef DATE_H
#define DATE_H

#include <string>

// ==========================================
// 1. Cấu trúc dữ liệu chính
// ==========================================
struct Date {
    int day;
    int month;
    int year;
    int weekday; // 0=Chủ nhật, 1=Thứ 2, ..., 6=Thứ 7

    Date(int d = 1, int m = 1, int y = 2026, int wd = 0);
    std::string weekdayName() const;
    bool isLeapYear() const;
    int daysInMonth() const;
    int dayOfYear() const; // Số thứ tự trong năm (1..365/366)
};

// Toán tử so sánh để dùng trong logic "trước/sau"
bool operator<(const Date& a, const Date& b);
bool operator==(const Date& a, const Date& b);
// Có thể thêm >, <=, >= nếu cần

// ==========================================
// 2. Hàm tiện ích (Utility Functions)
// ==========================================
bool isLeapYear(int year);               // Kiểm tra năm nhuận (dùng chung)
int daysInMonth(int month, int year);    // Số ngày trong tháng
int dayOfYear(int day, int month, int year); // Số thứ tự ngày trong năm

// ==========================================
// 3. Hàm xử lý chuỗi & Nhập liệu
// ==========================================
int weekdayFromString(const std::string& s); // "Thứ 4" -> 3
std::string weekdayToString(int wd);         // 3 -> "Thứ 4"
Date parseDate(const std::string& input);    // "Thứ 4 15/04/2026" -> Date

// ==========================================
// 4. Hàm tính toán Lõi (Core Logic)
// ==========================================
int countLeapYearsInRange(const Date& from, const Date& to); 
// Đếm số năm nhuận CÓ ẢNH HƯỞNG trong khoảng (tức là 29/2 nằm giữa from và to)

int computeWeekdayOffset(const Date& from, const Date& to);
// Tính độ lệch thứ (số ngày modulo 7) giữa hai ngày

Date predictWeekday(const Date& knownDate, const Date& targetDate);
// Dự đoán thứ của targetDate dựa trên knownDate

#endif // DATE_H