#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>

using namespace std;

struct LearningItem {
    string title;
    string subject;
    int difficulty;
    string dateAdded;
    vector<int> reviewDays;
};

string getTodayString() {
    time_t now = time(nullptr);
    tm* t = localtime(&now);
    ostringstream oss;
    oss << (t->tm_year + 1900) << '-'
        << setw(2) << setfill('0') << (t->tm_mon + 1) << '-'
        << setw(2) << setfill('0') << t->tm_mday;
    return oss.str();
}

vector<int> getReviewSchedule(int difficulty) {
    switch (difficulty) {
        case 1: return {7};
        case 2: return {3, 7};
        case 3: return {1, 3, 7};
        case 4: return {1, 2, 4, 7};
        case 5: return {1, 2, 3, 5, 8};
        default: return {};
    }
}

bool saveToFile(const vector<LearningItem>& items, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) return false;

    file << "Title,Subject,Difficulty,DateAdded\n";
    for (const auto& item : items) {
        file << "\"" << item.title << "\","
             << "\"" << item.subject << "\","
             << item.difficulty << ","
             << item.dateAdded << "\n";
    }
    return true;
}

vector<LearningItem> loadFromFile(const string& filename) {
    vector<LearningItem> items;
    ifstream file(filename);
    if (!file.is_open()) return items;

    string line;
    getline(file, line); // skip header
    while (getline(file, line)) {
        stringstream ss(line);
        string title, subject, diffStr, dateStr;

        getline(ss, title, ',');
        getline(ss, subject, ',');
        getline(ss, diffStr, ',');
        getline(ss, dateStr, ',');

        auto stripQuotes = [](string& s) {
            if (s.size() >= 2 && s.front() == '"' && s.back() == '"') {
                s = s.substr(1, s.size() - 2);
            }
        };
        stripQuotes(title);
        stripQuotes(subject);

        LearningItem item;
        item.title = title;
        item.subject = subject;
        item.difficulty = stoi(diffStr);
        item.dateAdded = dateStr;
        item.reviewDays = getReviewSchedule(item.difficulty);
        items.push_back(item);
    }
    return items;
}

void addItem(vector<LearningItem>& items) {
    LearningItem item;
    cout << "Enter title: ";
    getline(cin, item.title);
    cout << "Enter subject: ";
    getline(cin, item.subject);
    do {
        cout << "Enter difficulty (1-5 stars): ";
        cin >> item.difficulty;
        cin.ignore();
    } while (item.difficulty < 1 || item.difficulty > 5);

    item.dateAdded = getTodayString();
    item.reviewDays = getReviewSchedule(item.difficulty);
    items.push_back(item);
    cout << "Item \"" << item.title << "\" added successfully!\n";
}

void listItems(const vector<LearningItem>& items) {
    if (items.empty()) {
        cout << "List is empty.\n";
        return;
    }
    cout << "\n===== ITEM LIST =====\n";
    for (size_t i = 0; i < items.size(); ++i) {
        const auto& item = items[i];
        cout << "[" << i + 1 << "] " << item.title
             << " | Subject: " << item.subject
             << " | Difficulty: ";
        for (int s = 0; s < item.difficulty; ++s) cout << "*";
        cout << " | Added: " << item.dateAdded << "\n";
    }
    cout << "=====================\n\n";
}

int main() {
    const string FILENAME = "srtt_data.csv";
    vector<LearningItem> items = loadFromFile(FILENAME);

    char choice;
    do {
        cout << "\n===== SRTT v0.1 =====\n";
        cout << "[a] Add new item\n";
        cout << "[l] List all items\n";
        cout << "[s] Save to file\n";
        cout << "[q] Quit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 'a': addItem(items); break;
            case 'l': listItems(items); break;
            case 's':
                if (saveToFile(items, FILENAME))
                    cout << "Saved to " << FILENAME << "\n";
                else
                    cout << "Error saving file.\n";
                break;
            case 'q': cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 'q');

    saveToFile(items, FILENAME);
    return 0;
}