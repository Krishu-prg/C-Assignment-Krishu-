#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    float salary;

public:
    void setDetails(string n, int id, float s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void setSalary(float s) {
        salary = s;
    }

    void calculateSalary(float performanceBonus) {
        salary += performanceBonus;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setDetails("John Doe", 12345, 50000);
    emp.calculateSalary(5000); // Performance bonus
    emp.displayInfo();
    return 0;
}
