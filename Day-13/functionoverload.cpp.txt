#include <iostream>
using namespace std;

class MathOps {
public:
    int add(int x, int y) {
        return x + y;
    }

    float add(float x, float y) {
        return x + y;
    }
};

int main() {
    MathOps m;
    cout << "Integer sum -> " << m.add(20, 30) << "\n";
    cout << "Decimal sum -> " << m.add(1.5f, 4.3f) << "\n";
    return 0;
}