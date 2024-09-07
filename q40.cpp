#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = rows; j > i; --j) {
            cout << " ";
        }
        char ch = 'A';
        for (int k = 1; k <= i; ++k) {
            cout << ch << " ";
            ch++;
        }
        ch--;
        for (int l = i - 1; l > 0; --l) {
            ch--;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
