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
    int upperLimit;
    cout << "Input the upper limit: ";
    cin >> upperLimit;

    cout << "The non-prime numbers are:" << endl;
    for (int i = 2; i <= upperLimit; i++) {
        if (!isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
