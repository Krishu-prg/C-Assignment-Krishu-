#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reduceToOneDigit(int num) {
    while (num >= 10) {
        num = sumDigits(num);
    }
    return num;
}

int main() {
    int number;
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "The number must be non-negative." << endl;
        return 1;
    }

    cout << reduceToOneDigit(number) << endl;

    return 0;
}
