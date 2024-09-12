#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, largestWord, currentWord;
    
    cout << "Enter a string: ";
    getline(cin, str);

    
    str += ' ';


    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            currentWord += str[i];  
        } else {
            if (currentWord.length() > largestWord.length()) {
                largestWord = currentWord; 
            }
            currentWord = "";  
        }
    }

    // Output the largest word
    cout << "Largest word: " << largestWord << endl;

    return 0;
}
