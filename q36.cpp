#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    int num = 1;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num;
            if (num == 1) num = 0;
            else num = 1;
        }
        cout << endl;
    }

    return 0;
}
