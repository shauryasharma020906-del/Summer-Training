#include <iostream>
using namespace std;

long long calcPower(int b, int p) {
    return (p != 0) ? b * calcPower(b, p - 1) : 1;
}

int main() {
    int baseVal, powerVal;
    cout << "Input base: ";
    cin >> baseVal;
    cout << "Input power: ";
    cin >> powerVal;
    
    cout << "Result: " << calcPower(baseVal, powerVal) << "\n";
    return 0;
}