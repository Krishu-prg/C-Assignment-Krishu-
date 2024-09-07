#include <iostream>
using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    cout << "The product of digits of " << num << " is: " << productOfDigits(num) << endl;
    return 0;
}
