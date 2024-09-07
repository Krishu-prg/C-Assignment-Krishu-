#include <iostream>
using namespace std;

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int daysFromStart(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year) == 1) {
        daysInMonth[1] = 29;
    }

    int totalDays = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += day;

    for (int i = 0; i < year; i++) {
        totalDays += isLeapYear(i) == 1 ? 366 : 365;
    }

    return totalDays;
}

int main() {
    int year1, month1, day1;
    int year2, month2, day2;

    cout << "Enter first date (YYYY MM DD): ";
    cin >> year1 >> month1 >> day1;

    cout << "Enter second date (YYYY MM DD): ";
    cin >> year2 >> month2 >> day2;

    int totalDays1 = daysFromStart(year1, month1, day1);
    int totalDays2 = daysFromStart(year2, month2, day2);

    int daysBetween = totalDays1 - totalDays2;
    if (daysBetween < 0) {
        daysBetween = -daysBetween;
    }

    cout << "Days between the two dates: " << daysBetween << endl;

    return 0;
}
