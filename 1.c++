#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    void setValue(float r, float i) {
        real = r;
        imag = i;
    }
    void printValue() {
        cout << "Complex Number = " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    c1.setValue(3.5, 2.5);
    c1.printValue();
    return 0;
}
