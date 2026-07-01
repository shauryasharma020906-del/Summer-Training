#include <iostream>
using namespace std;

class BaseShape {
public:
    virtual void display() {
        cout << "Base: Undefined Shape\n";
    }
};

class Rect : public BaseShape {
public:
    void display() override {
        cout << "Derived: Rectangle\n";
    }
};

int main() {
    Rect myRect;
    myRect.display();
    return 0;
}