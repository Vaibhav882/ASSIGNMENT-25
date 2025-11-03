#include <iostream>
using namespace std;

class Area {
public:
    void squareArea(float side) {
        cout << "Area of Square = " << side * side << endl;
    }
    void rectangleArea(float length, float breadth) {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
    void circleArea(float radius) {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Area a1;
    a1.squareArea(5);
    a1.rectangleArea(4, 6);
    a1.circleArea(3);
    return 0;
}
