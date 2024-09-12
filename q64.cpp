#include <iostream>
using namespace std;

// Function to find the sum of all elements in an array using recursion
int sumArray(int arr[], int n) {
    if (n <= 0) 
        return 0;
    return sumArray(arr, n - 1) + arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, n) << endl;
    return 0;
}
