#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Input a number to find the last prime number before it: ";
    cin >> num;

    for (int i = num - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << i << " is the last prime number before " << num << endl;
            break;
        }
    }
    return 0;
}
