#include <iostream>

using namespace std;

class Triangle {
private:
    float side1;
    float side2;
    float side3;

public:
    void setSides(float a, float b, float c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    void classify() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    }
};

int main() {
    Triangle t;
    t.setSides(5, 5, 8);
    t.classify();
    return 0;
}
