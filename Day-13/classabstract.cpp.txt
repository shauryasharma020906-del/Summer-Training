#include <iostream>
using namespace std;

class Automobile {
public:
    virtual void start() = 0;
};

class Sedan : public Automobile {
public:
    void start() override {
        cout << "Sedan is now running.\n";
    }
};

int main() {
    Sedan s;
    s.start();
    return 0;
}