#include <iostream>
#include <string>
using namespace std;

string removeCharacter(string str, char ch) {
    string result = "";
    
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    string str;
    char ch;

    
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    
    string updatedString = removeCharacter(str, ch);

    
    cout << "Updated string: " << updatedString << endl;

    return 0;
}
