#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    
   
    cout << "Enter a string: ";
    cin >> str;

   
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    
    if (str == reversedStr) {
        cout << "True" << endl;  
    } else {
        cout << "False" << endl;  
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;


int countRepeatedLetters(string word) {
    int count[26] = {0};
    int maxCount = 0;


    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            count[word[i] - 'a']++;
        } else if (word[i] >= 'A' && word[i] <= 'Z') {
            count[word[i] - 'A']++;
        }
    }

    
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1 && count[i] > maxCount) {
            maxCount = count[i];
        }
    }

    return maxCount;
}

int main() {
    string str, word, maxRepeatedWord;
    int maxRepeatedCount = 0;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    str += ' ';  

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];  
        } else {
            int repeatedCount = countRepeatedLetters(word);
            if (repeatedCount > maxRepeatedCount) {
                maxRepeatedCount = repeatedCount;
                maxRepeatedWord = word;  
            }
            word = "";  
        }
    }

    
    cout << "Word which has the highest number of repeated letters: " << maxRepeatedWord << endl;

    return 0;
}
