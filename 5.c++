#include <iostream>
using namespace std;

class ReverseNumber {
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
    void findReverse() {
        int rev = 0, temp = num;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        cout << "Reverse of " << num << " = " << rev << endl;
    }
};

int main() {
    ReverseNumber r1;
    r1.setNumber(1234);
    r1.findReverse();
    return 0;
}
