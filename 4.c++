#include <iostream>
using namespace std;

class LargestNumber {
    int a, b, c;
public:
    void setNumbers(int x, int y, int z) {
        a = x; b = y; c = z;
    }
    void findLargest() {
        int largest = (a > b && a > c) ? a : (b > c ? b : c);
        cout << "Largest Number = " << largest << endl;
    }
};

int main() {
    LargestNumber l1;
    l1.setNumbers(10, 25, 7);
    l1.findLargest();
    return 0;
}
