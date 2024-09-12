#include <iostream>
using namespace std;


bool isPrime(int n, int i = 2) {
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}


int sumPrimes(int start, int end) {
    if (start > end)
        return 0;
    if (isPrime(start))
        return start + sumPrimes(start + 1, end);
    return sumPrimes(start + 1, end);
}

int main() {
    int start = 1, end = 10;
    cout << "Sum of prime numbers from " << start << " to " << end << " is: " << sumPrimes(start, end) << endl;
    return 0;
}
