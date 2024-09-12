#include <iostream>
using namespace std;

void findLargestThree(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second) {
            third = arr[i];
        }
    }

    cout << "Largest three elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}
