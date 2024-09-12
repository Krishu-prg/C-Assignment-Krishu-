#include <iostream>
using namespace std;

void findRepeating(int arr[], int n) {
    int firstRepeating = -1, secondRepeating = -1;

    for (int i = 0; i < n; i++) {
        int absValue = abs(arr[i]);
        if (arr[absValue - 1] > 0) {
            arr[absValue - 1] = -arr[absValue - 1];
        } else {
            if (firstRepeating == -1) {
                firstRepeating = absValue;
            } else {
                secondRepeating = absValue;
                break;
            }
        }
    }

    cout << "Repeating elements are: " << firstRepeating << " and " << secondRepeating << endl;
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    findRepeating(arr, n);
    return 0;
}
