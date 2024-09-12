#include <iostream>
#include <vector>

using namespace std;

void capitalizeFirstCharacter(vector<string>& vec) {
    for (string& str : vec) {
        if (!str.empty()) {
            if (str[0] >= 'a' && str[0] <= 'z') {
                str[0] = str[0] - 'a' + 'A'; // Convert to uppercase
            }
        }
    }
}

int main() {
    vector<string> vec = {"red", "green", "black", "white", "pink"};
    
    cout << "Original Vector elements:" << endl;
    for (const string& str : vec) {
        cout << str << " ";
    }
    cout << endl;
    
    capitalizeFirstCharacter(vec);
    
    cout << "Capitalize the fir
