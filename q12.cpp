#include <iostream>
using namespace std;

int squareRoot(int n) {
    int root = 0;
    while (root * root <= n) {
        root++;
    }
    return root - 1;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << "Square root of " << n << " = " << squareRoot(n) << endl;
    return 0;
}
