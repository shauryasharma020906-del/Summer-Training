#include <iostream>
using namespace std;

class Rect {
    int l;
    int w;

public:
    void setData(int x, int y) {
        l = x;
        w = y;
    }

    int area() {
        return l * w;
    }
};

int main() {
    Rect box;
    int a, b;

    cout << "Input L: ";
    cin >> a;
    cout << "Input W: ";
    cin >> b;

    box.setData(a, b);
    cout << "Calculated Area = " << box.area() << "\n";

    return 0;
}