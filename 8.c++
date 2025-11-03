#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }
    void findArea() {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;
    r1.setDimensions(5.5, 3.2);
    r1.findArea();
    return 0;
}
