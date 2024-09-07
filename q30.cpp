#include <iostream>
using namespace std;

int main() {
    int start, numItems, diff;
    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> numItems;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;

    int sum = 0;
    cout << "The Sum of the A.P. series is:" << endl;
    for (int i = 0; i < numItems; i++) {
        int term = start + i * diff;
        cout << term << " ";
        sum += term;
    }
    cout << "= " << sum << endl;
    return 0;
}
