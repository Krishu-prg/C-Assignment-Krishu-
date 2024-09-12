#include <iostream>
using namespace std;


string oneToNineteen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                          "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convertToWords(int num) {
    if (num == 0) return "Zero";  
    if (num < 20) return oneToNineteen[num];
    else return tens[num / 10] + (num % 10 != 0 ? " " + oneToNineteen[num % 10] : "");
}

int main() {
    int num;
    cout << "Enter a non-negative integer (less than 100): ";
    cin >> num;

    if (num < 0 || num >= 100) {
        cout << "Invalid input. Enter a number between 0 and 99." << endl;
    } else {
        cout << "In words: " << convertToWords(num) << endl;
    }

    return 0;
}
