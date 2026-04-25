#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct DNguyenAPI {
    // Hàm bóc tách ngày tháng từ string "dd/mm/yyyy"
    static void parseDatePart(string s, int &d, int &m, int &y) {
        size_t f = s.find('/');
        size_t l = s.rfind('/');
        d = stoi(s.substr(0, f));
        m = stoi(s.substr(f + 1, l - f - 1));
        y = stoi(s.substr(l + 1));
    }

    // Logic "Absolute Day" tinh hoa của mày
    static long long toAbs(int d, int m, int y) {
        if (m < 3) { y--; m += 12; }
        return 365LL * y + (y / 4) - (y / 100) + (y / 400) + (153 * (m - 3) + 2) / 5 + d;
    }

    // HÀM CHÍNH: Nhận 2 string, trả về 1 string kết quả
    static string predict(string rawD1, string rawD3) {
        // rawD1: "T5 16/04/2026"
        // rawD3: "?? 01/01/2100" hoặc "01/01/2100"

        // 1. Bóc tách D1
        int w1 = (rawD1[1] == 'N') ? 1 : (rawD1[1] - '0');
        int d1, m1, y1;
        parseDatePart(rawD1.substr(rawD1.find(' ') + 1), d1, m1, y1);

        // 2. Bóc tách D3
        int d3, m3, y3;
        size_t spacePos = rawD3.find(' ');
        string datePart3 = (spacePos == string::npos) ? rawD3 : rawD3.substr(spacePos + 1);
        parseDatePart(datePart3, d3, m3, y3);

        // 3. Tính toán độ lệch
        long long diff = toAbs(d3, m3, y3) - toAbs(d1, m1, y1);
        int w3 = (w1 + (diff % 7) + 7) % 7;
        if (w3 == 0) w3 = 7;

        // 4. Trả về kết quả dạng string
        string res = (w3 == 1) ? "CN" : "T" + to_string(w3);
        return "Ngay " + datePart3 + " la " + res;
    }
};

int main() {
    // Truyền string trực tiếp như một API
    string origin = "T5 16/04/2026";
    string target = "?? 01/01/2100";

    cout << "--- D.NGUYEN WEEKDAY PREDICTOR API ---" << endl;
    cout << DNguyenAPI::predict(origin, target) << endl;

    // Test case mày vừa đưa: 15/02/2026 (CN) -> 15/03/2028
    cout << DNguyenAPI::predict("CN 15/02/2026", "15/03/2028") << endl;

    return 0;
}