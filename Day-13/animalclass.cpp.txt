#include <iostream>
using namespace std;

class Creature {
public:
    void display() {
        cout << "Creature class method called.\n";
    }
};

class Hound : public Creature {
};

int main() {
    Hound h;
    h.display();
    return 0;
}