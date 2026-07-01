#include <iostream>
using namespace std;

class Container {
    int length;

public:
    void setLength(int length) {
        this->length = length;
    }

    void displayLength() {
        cout << "Container Length = " << length << "\n";
    }
};

int main() {
    Container c;
    int val;

    cout << "Input length: ";
    cin >> val;

    c.setLength(val);
    c.displayLength();

    return 0;
}