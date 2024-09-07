#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    if (num == 0) {
        return 1; 
    }
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num1, num2, sum;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    
    sum = num1 + num2;
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    cout << "The number of digits in the sum is: " << countDigits(sum) << endl;
    
    return 0;
}
