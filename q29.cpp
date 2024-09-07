#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    cout << "The number in reverse order is : " << reversed << endl;
    return 0;
}
