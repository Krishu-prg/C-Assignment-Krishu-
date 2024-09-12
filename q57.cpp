#include <iostream>
#include <string>
using namespace std;

void findThirdLargestString(string arr[], int n) {
    string first = "", second = "", third = "";
    
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

    cout << "Third largest string is: " << third << endl;
}

int main() {
    string arr[] = {"apple", "banana", "cherry", "date", "fig"};
    int n = sizeof(arr)/sizeof(arr[0]);
    findThirdLargestString(arr, n);
    return 0;
}
