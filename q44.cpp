#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;


    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A'; 
    }

    // Traverse the string
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; 
        }
    }

    cout << "Capitalized string: " << str << endl;

    return 0;
}
