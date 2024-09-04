#include <iostream>
using namespace std;

int main() {
    int n, num;
    int highest1 = INT_MIN, highest2 = INT_MIN, highest3 = INT_MIN;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num > highest1) {
            highest3 = highest2;
            highest2 = highest1;
            highest1 = num;
        } else if (num > highest2) {
            highest3 = highest2;
            highest2 = num;
        } else if (num > highest3) {
            highest3 = num;
        }
    }

    cout << "The three highest numbers in descending order are: " << highest1 << ", " << highest2 << ", " << highest3 << endl;

    return 0;
}
