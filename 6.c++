#include <iostream>
using namespace std;

class Square {
    static int count;
public:
    void findSquare(int n) {
        count++;
        cout << "Square of " << n << " = " << n * n << endl;
    }
    static void displayCount() {
        cout << "Function called " << count << " times." << endl;
    }
};

int Square::count = 0;

int main() {
    Square s;
    s.findSquare(5);
    s.findSquare(10);
    s.findSquare(7);
    Square::displayCount();
    return 0;
}
