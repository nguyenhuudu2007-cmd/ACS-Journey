#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>   // for abs()
#include <algorithm> // for swap
#include <cctype>    // for tolower

using namespace std;

// ============================================================
// 1. DINH NGHIA STRUCT DATE
// ============================================================
struct Date {
    int day;
    int month;
    int year;
    int weekday;   // 1 = Chu Nhat, 2 = Thu 2, ..., 7 = Thu 7

    Date(int d = 1, int m = 1, int y = 2026, int wd = 1)
        : day(d), month(m), year(y), weekday(wd) {}

    bool isLeapYear() const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth() const {
        static const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int d = days[month - 1];
        if (month == 2 && isLeapYear()) d = 29;
        return d;
    }

    int dayOfYear() const {
        static const int daysBefore[] = {0,31,59,90,120,151,181,212,243,273,304,334};
        int sum = daysBefore[month - 1] + day;
        if (month > 2 && isLeapYear()) sum += 1;
        return sum;
    }

    string weekdayName() const {
        static const string names[] = {
            "Chu Nhat", "Thu 2", "Thu 3", "Thu 4", "Thu 5", "Thu 6", "Thu 7"
        };
        if (weekday >= 1 && weekday <= 7)
            return names[weekday - 1];
        return "Unknown";
    }

    bool operator<(const Date& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }

    bool operator==(const Date& other) const {
        return year == other.year && month == other.month && day == other.day;
    }
};

// ============================================================
// 2. CAC HAM HO TRO CHO THUAT TOAN "HAI MOC"
// ============================================================

// Kiem tra nam nhuan (dung chung)
bool isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// Tim nam nhuan tiep theo > y (nhay coc qua nam thuong)
int nextLeapYear(int y) {
    int next = ((y / 4) + 1) * 4;
    while (!isLeapYear(next)) next += 4;
    return next;
}

// Tim nam nhuan truoc do <= y (nhay coc qua nam thuong)
int prevLeapYear(int y) {
    int prev = (y / 4) * 4;
    while (!isLeapYear(prev)) prev -= 4;
    return prev;
}

// Xac dinh xem ngay co thuoc "Vung Ha" (sau 29/2) hay khong
bool isLowerRegion(int day, int month) {
    return (month > 2) || (month == 2 && day == 29);
}

// Dem so nam nhuan co anh huong giua D2 va D3 (cung ngay thang, khac nam)
int countInfluentialLeaps(const Date& D2, const Date& D3) {
    if (D2.year == D3.year) return 0;

    const Date *earlier = &D2, *later = &D3;
    if (D3.year < D2.year) swap(earlier, later);

    int y1 = earlier->year;
    int y2 = later->year;
    bool lower1 = isLowerRegion(earlier->day, earlier->month);
    bool lower2 = isLowerRegion(later->day, later->month);

    int N2, N3; // Hai moc nhuan

    // --- Xac dinh moc trai N2 dua vao vung cua earlier ---
    if (lower1) {
        // earlier thuoc Vung Ha -> N2 la nam nhuan dau tien > y1
        N2 = nextLeapYear(y1);
    } else {
        // earlier thuoc Vung Thuong -> N2 la nam nhuan dau tien >= y1
        N2 = isLeapYear(y1) ? y1 : nextLeapYear(y1);
    }

    // --- Xac dinh moc phai N3 dua vao vung cua later ---
    if (lower2) {
        // later thuoc Vung Ha -> N3 la nam nhuan cuoi cung <= y2
        N3 = prevLeapYear(y2);
    } else {
        // later thuoc Vung Thuong -> N3 la nam nhuan cuoi cung < y2
        N3 = prevLeapYear(y2 - 1);
    }

    if (N2 > N3) return 0;

    // Dem so nam nhuan trong khoang [N2, N3] bang cach nhay 4 nam
    int count = 0;
    for (int y = N2; y <= N3; y += 4) {
        if (isLeapYear(y)) count++;
    }
    return count;
}

// ============================================================
// 3. CAC HAM TINH DO LECH
// ============================================================
int deltaIntra(const Date& D1, const Date& D2) {
    int diff = D2.dayOfYear() - D1.dayOfYear();
    return (diff % 7 + 7) % 7;
}

int deltaInter(const Date& D2, const Date& D3) {
    int yearDiff = abs(D3.year - D2.year);
    int leaps = countInfluentialLeaps(D2, D3);
    return yearDiff + leaps;
}

// ============================================================
// 4. HAM CHINH: DU DOAN THU
// ============================================================
int predictWeekday(const Date& known, const Date& targetOriginal) {
    Date target = targetOriginal;
    
    // --- XU LY EDGE CASE: NGAY 29/02 ---
    bool targetIsLeapling = (target.day == 29 && target.month == 2);
    bool knownYearIsNonLeap = !isLeapYear(known.year);
    bool shiftedLeapling = false;
    
    // Neu tim ngay 29/02 nhung nam goc khong nhuan, ta khong the tao ngay ảo 29/02.
    // Giai phap: Tim thu cua ngay 28/02 truoc, roi cong 1 vao ket qua.
    if (targetIsLeapling && knownYearIsNonLeap) {
        target.day = 28;
        shiftedLeapling = true;
    }

    // Buoc 1: Tao D2 (cung ngay thang target, nam cua known)
    Date D2(target.day, target.month, known.year);

    // Buoc 2: Tinh W2 (Do lech trong nam)
    int W1 = known.weekday;
    int dIntra = deltaIntra(known, D2);
    int signIntra = (D2.dayOfYear() >= known.dayOfYear()) ? 1 : -1;
    int W2 = W1 + signIntra * dIntra;
    W2 = ((W2 - 1) % 7 + 7) % 7 + 1;

    // Buoc 3: Tinh W3 (Do lech giua cac nam)
    int yearDiff = target.year - known.year;
    int dInter = deltaInter(D2, target);
    int signInter = (yearDiff >= 0) ? 1 : -1;
    int W3 = W2 + signInter * dInter;
    W3 = ((W3 - 1) % 7 + 7) % 7 + 1;

    // Phuc hoi bu tru cho ngay 29/02 neu da bi lui ve 28/02 o tren
    if (shiftedLeapling) {
        W3 = (W3 % 7) + 1;
    }

    return W3;
}

// ============================================================
// 5. CAC HAM HO TRO NHAP LIEU
// ============================================================
int parseWeekday(const string& s) {
    string w = s;
    for (char& c : w) c = tolower(c);
    if (w == "cn" || w == "c.n" || w == "chunhat" || w == "chu nhat") return 1;
    if (w == "t2" || w == "thu2" || w == "thu 2" || w == "hai") return 2;
    if (w == "t3" || w == "thu3" || w == "thu 3" || w == "ba") return 3;
    if (w == "t4" || w == "thu4" || w == "thu 4" || w == "tu") return 4;
    if (w == "t5" || w == "thu5" || w == "thu 5" || w == "nam") return 5;
    if (w == "t6" || w == "thu6" || w == "thu 6" || w == "sau") return 6;
    if (w == "t7" || w == "thu7" || w == "thu 7" || w == "bay") return 7;
    return -1;
}

bool parseDate(const string& s, int& d, int& m, int& y) {
    size_t p1 = s.find('/');
    size_t p2 = s.rfind('/');
    if (p1 == string::npos || p2 == string::npos || p1 == p2) return false;
    try {
        d = stoi(s.substr(0, p1));
        m = stoi(s.substr(p1 + 1, p2 - p1 - 1));
        y = stoi(s.substr(p2 + 1));
        return true;
    } catch (...) {
        return false;
    }
}

// ============================================================
// 6. MAIN
// ============================================================
int main() {
    cout << "====================================\n";
    cout << "  WEEKDAY SHIFT THEOREM (D.Nguyen)\n";
    cout << "====================================\n";
    cout << "Nhap theo dinh dang: <Thu> <dd/mm/yyyy>\n";
    cout << "Vi du: T5 16/04/2026 hoac CN 01/01/2030\n\n";

    string line;
    
    // --- Ngay goc ---
    cout << "Ngay goc (biet thu): ";
    getline(cin, line);
    stringstream ss(line);
    string wStr, dateStr;
    ss >> wStr >> dateStr;
    
    int w1 = parseWeekday(wStr);
    if (w1 == -1) {
        cout << "Loi: Khong nhan dien duoc thu.\n";
        return 1;
    }
    
    int d1, m1, y1;
    if (!parseDate(dateStr, d1, m1, y1)) {
        cout << "Loi: Dinh dang ngay khong hop le.\n";
        return 1;
    }
    
    Date known(d1, m1, y1, w1);
    cout << "=> Ngay goc: " << known.day << "/" << known.month << "/" << known.year
         << " la " << known.weekdayName() << "\n\n";

    // --- Ngay dich ---
    cout << "Ngay dich (can tim thu): ";
    getline(cin, line);
    ss.clear();
    ss.str(line);
    string maybeWStr;
    ss >> maybeWStr;
    int tmpW = parseWeekday(maybeWStr);
    if (tmpW != -1) {
        ss >> dateStr;
    } else {
        dateStr = maybeWStr;
    }
    
    int d3, m3, y3;
    if (!parseDate(dateStr, d3, m3, y3)) {
        cout << "Loi: Dinh dang ngay khong hop le.\n";
        return 1;
    }
    
    Date target(d3, m3, y3);
    int w3 = predictWeekday(known, target);
    target.weekday = w3;
    
    cout << "=> Ngay " << target.day << "/" << target.month << "/" << target.year
         << " la " << target.weekdayName() << " (weekday=" << w3 << ")\n";

    cout << "\nTinh tiep? (y/n): ";
    char again;
    cin >> again;
    cin.ignore();
    if (again == 'y' || again == 'Y') {
        cout << "\n";
        main();
    }
    
    return 0;
}