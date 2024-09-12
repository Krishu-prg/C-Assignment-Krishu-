#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    void setDetails(string n, string c, int r, float m) {
        name = n;
        className = c;
        rollNumber = r;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        if (marks >= 75) return 'B';
        if (marks >= 50) return 'C';
        return 'D';
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student s;
    s.setDetails("Alice", "10th Grade", 101, 85);
    s.displayInfo();
    return 0;
}
