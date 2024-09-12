#include <iostream>
using namespace std;

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findFirstRepeating(arr, n);
    if (result != -1) {
        cout << "First repeating element is: " << result << endl;
    } else {
        cout << "No repeating elements found" << endl;
    }
    return 0;
}
