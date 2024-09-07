#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            if (k <= i) {
                cout << k;
            } else {
                cout << 2 * i - k;
            }
        }
        cout << endl;
    }

    return 0;
}
