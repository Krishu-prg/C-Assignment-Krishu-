#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    }

    return 0;
}
