#include <iostream>
using namespace std;

class Time {
    int hr, min, sec;
public:
    void setTime(int h, int m, int s) {
        hr = h; min = m; sec = s;
    }
    void displayTime() {
        cout << hr << " hr " << min << " min " << sec << " sec" << endl;
    }
};

int main() {
    Time t1;
    t1.setTime(3, 45, 20);
    t1.displayTime();
    return 0;
}
