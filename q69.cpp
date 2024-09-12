#include <iostream>
using namespace std;

// Function to calculate sum of even numbers in a range using recursion
int sumEven(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 2, end);
    return sumEven(start + 1, end);
}

// Function to calculate sum of odd numbers in a range using recursion
int sumOdd(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 2, end);
    return sumOdd(start + 1, end);
}

int main() {
    int start = 1, end = 10;
    cout << "Sum of even numbers from " << start << " to " << end << " is: " << sumEven(start, end) << endl;
    cout << "Sum of odd numbers from " << start << " to " << end << " is: " << sumOdd(start, end) << endl;
    return 0;
}
