#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isValid() {
        if (year < 1) return false;
        if (month < 1 || month > 12) return false;

        int daysInMonth;
        switch (month) {
            case 2:
                daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
                break;
            case 4: case 6: case 9: case 11:
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31;
                break;
        }
        return day >= 1 && day <= daysInMonth;
    }
};

int main() {
    Date d;
    d.setDate(29, 2, 2024);
    d.getDate();
    if (d.isValid()) {
        cout << "The date is valid." << endl;
    } else {
        cout << "The date is invalid." << endl;
    }
    return 0;
}
