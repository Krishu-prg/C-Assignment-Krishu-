#include <iostream>
using namespace std;

void printFactors(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    cout << "The factors are: ";
    printFactors(num);
    cout << endl;
    return 0;
}
