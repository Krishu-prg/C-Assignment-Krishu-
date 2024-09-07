#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "false" << endl;
        return 0;
    }

    int temp = number;
    while (temp % 3 == 0) {
        temp /= 3;
    }

    if (temp == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
