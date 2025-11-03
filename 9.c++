#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    void setRadius(float r) {
        radius = r;
    }
    void findArea() {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    }
};

int main() {
    Circle c1;
    c1.setRadius(4.5);
    c1.findArea();
    return 0;
}
