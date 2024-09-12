#include <iostream>
#include <vector>

using namespace std;

void findSmallerThanNeighbours(const vector<int>& vec) {
    cout << "Vector elements that are smaller than their adjacent neighbours:" << endl;
    
    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            cout << vec[i] << endl;
        }
    }
}

int main() {
    vector<int> vec = {1, 2, 5, 0, 3, 1, 7};
    cout << "Original Vector elements:" << endl;
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    
    findSmallerThanNeighbours(vec);
    
    return 0;
}
