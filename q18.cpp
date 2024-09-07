#include <iostream>
using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    if (decimal == 0) return "0";
    while (decimal > 0) {
        binary = char((decimal % 2) + '0') + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The binary number is: " << decimalToBinary(decimal) << endl;
    return 0;
}
