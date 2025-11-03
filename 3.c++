#include <iostream>
using namespace std;

class Factorial {
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
    void findFactorial() {
        int fact = 1;
        for (int i = 1; i <= num; i++)
            fact *= i;
        cout << "Factorial of " << num << " = " << fact << endl;
    }
};

int main() {
    Factorial f1;
    f1.setNumber(5);
    f1.findFactorial();
    return 0;
}
