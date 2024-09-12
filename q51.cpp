#include <iostream>
using namespace std;

void findKLargest(int arr[], int n, int k) {
    int largest[k];
    for (int i = 0; i < k; i++) {
        largest[i] = INT_MIN;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest[0]) {
            largest[0] = arr[i];
            for (int j = 1; j < k; j++) {
                if (largest[j-1] > largest[j]) {
                    swap(largest[j-1], largest[j]);
                } else {
                    break;
                }
            }
        }
    }

    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << largest[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    findKLargest(arr, n, k);
    return 0;
}
