#include <iostream>
using namespace std;

class Greatest {
    int a, b, c;
public:
    void setNumbers(int x, int y, int z) {
        a = x; b = y; c = z;
    }
    void findGreatest() {
        int g = (a > b && a > c) ? a : (b > c ? b : c);
        cout << "Greatest Number = " << g << endl;
    }
};

int main() {
    Greatest g1;
    g1.setNumbers(15, 9, 21);
    g1.findGreatest();
    return 0;
}
