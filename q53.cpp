#include <iostream>
using namespace std;

void updateArray(int arr[], int n) {
    if (n < 2) return;

    int *result = new int[n];
    result[0] = arr[0] * arr[1];
    for (int i = 1; i < n - 1; i++) {
        result[i] = arr[i - 1] * arr[i + 1];
    }
    result[n - 1] = arr[n - 2] * arr[n - 1];

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;
}

int main() {
    int arr[] = {2, 3, 5, 7, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    updateArray(arr, n);
    return 0;
}
