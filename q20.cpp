#include <iostream>
using namespace std;

char decimalToHexDigit(int decimal) {
    if (decimal >= 0 && decimal <= 9) return '0' + decimal;
    else return 'A' + (decimal - 10);
}

string decimalToHexadecimal(int decimal) {
    string hex = "";
    if (decimal == 0) return "0";
    while (decimal > 0) {
        hex = decimalToHexDigit(decimal % 16) + hex;
        decimal /= 16;
    }
    return hex;
}

int main() {
    int decimal;
    cout << "Input a decimal number: ";
    cin >> decimal;
    cout << "The hexadecimal number is: " << decimalToHexadecimal(decimal) << endl;
    return 0;
}
