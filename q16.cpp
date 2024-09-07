#include <iostream>
using namespace std;

string onesComplement(string binary) {
    for (int i = 0; i < binary.length(); i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    return binary;
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;
    cout << "The original binary = " << binary << endl;
    cout << "After ones complement the number = " << onesComplement(binary) << endl;
    return 0;
}
