#include <iostream>
#include <string>

using namespace std;

bool containsAllLetters(const string& str1, const string& str2) {
    for (char ch2 : str2) {
        bool found = false;
        for (char ch1 : str1) {
            if (ch1 == ch2) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "Python";
    string str2 = "Py";
    
    cout << "Original String elements: " << str1 << " " << str2 << endl;
    cout << "Check - First string contains all letters from second string: " 
         << (containsAllLetters(str1, str2) ? "true" : "false") << endl;
    
    return 0;
}
