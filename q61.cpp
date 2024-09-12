#include <iostream>
#include <vector>

using namespace std;

bool containsNumber(const string& str) {
    for (char ch : str) {
        if (ch >= '0' && ch <= '9') {
            return true;
        }
    }
    return false;
}

void findStringsWithNumbers(const vector<string>& vec) {
    cout << "Find strings that contain a number(s) from the said vector:" << endl;
    for (const string& str : vec) {
        if (containsNumber(str)) {
            cout << str << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<string> vec = {"red", "green23", "1black", "white"};
    
    cout << "Original Vector elements:" << endl;
    for (const string& str : vec) {
        cout << str << " ";
    }
    cout << endl;
    
    findStringsWithNumbers(vec);
    
    return 0;
}
