#include <iostream>
using namespace std;

long long calcPower(int b, int p) {
    long long ans = 1;
    while (p != 0) {
        ans *= b;
        p--;
    }
    return ans;
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