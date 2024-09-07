#include <iostream>
using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}

string addBinary(string a, string b) {
    string result = "";
    int carry = 0;
    int n = a.length();
    for (int i = n - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result = char((sum % 2) + '0') + result;
        carry = sum / 2;
    }
    if (carry) result = '1' + result;
    return result;
}

string twosComplement(string binary) {
    string onesComp = onesComplement(binary);
    string one(binary.length(), '0');
    one[binary.length() - 1] = '1';
    return addBinary(onesComp, one);
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;
    cout << "The original binary = " << binary << endl;
    string onesComp = onesComplement(binary);
    cout << "After ones complement the value = " << onesComp << endl;
    cout << "After twos complement the value = " << twosComplement(binary) << endl;
    return 0;
}
