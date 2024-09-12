#include <iostream>
using namespace std;

void findSecondLowestHighest(int arr[], int n) {
    int lowest = INT_MAX, secondLowest = INT_MAX;
    int highest = INT_MIN, secondHighest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < lowest) {
            secondLowest = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];
        }

        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }

    cout << "Second lowest element is: " << secondLowest << endl;
    cout << "Second highest element is: " << secondHighest << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSecondLowestHighest(arr, n);
    return 0;
}
