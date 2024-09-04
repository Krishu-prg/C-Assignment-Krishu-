#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit, temp, divisor = 1;

    cout << "Input any number: ";
    cin >> num;

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    firstDigit = temp;

    int swappedNum = (num % divisor) / 10;
    swappedNum = lastDigit * divisor + swappedNum * 10 + firstDigit;

    cout << "The number after swapping the first and last digits is: " << swappedNum << endl;

    return 0;
}
