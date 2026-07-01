#include <iostream>
using namespace std;

class Automobile {
public:
    static int totalCars;

    Automobile() {
        totalCars++;
    }
};

int Automobile::totalCars = 0;

int main() {
    Automobile a1;
    Automobile a2;
    Automobile a3;
    Automobile a4;

    cout << "Automobiles created so far: " << Automobile::totalCars << "\n";

    return 0;
}