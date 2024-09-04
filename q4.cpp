#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int start, end, totalSum = 0;

    cout << "Input the start number: ";
    cin >> start;

    cout << "Input the end number: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        totalSum += sumOfDigits(i);
    }

    cout << "The sum of all digits between " << start << " and " << end << " is: " << totalSum << endl;

    return 0;
}
